IF(DEFINED ENV{MKLROOT})
    IF(CMAKE_SIZEOF_VOID_P EQUAL 8)
        SET(SEARCH_PATH $ENV{MKLROOT}/lib/intel64 $ENV{MKLROOT}/lib/intel64_lin)
    ELSE()
        SET(SEARCH_PATH $ENV{MKLROOT}/lib/ia32)
    ENDIF()
ELSE()
    SET(SEARCH_PATH /usr/local/lib64 /usr/local/lib32/ /usr/local/lib/ /usr/lib64 /usr/lib32 /usr/lib)
ENDIF()


IF(CMAKE_Fortran_COMPILER_ID STREQUAL "GNU")
    SET(MKL_FRONTEND mkl_gf_ilp64)
    SET(MKL_MIDDLE   mkl_sequential)
    SET(MKL_CORE mkl_core)
ELSEIF(CMAKE_Fortran_COMPILER_ID STREQUAL "Intel" OR CMAKE_Fortran_COMPILER_ID STREQUAL "IntelLLVM")
    SET(MKL_FRONTEND mkl_intel_ilp64)
    SET(MKL_MIDDLE   mkl_sequential)
    SET(MKL_CORE mkl_core)
ELSEIF(CMAKE_Fortran_COMPILER_ID STREQUAL "PGI")
    SET(MKL_FRONTEND mkl_intel_ilp64)
    SET(MKL_MIDDLE   mkl_sequential)
    SET(MKL_CORE mkl_core)
ENDIF()


FIND_PACKAGE(Threads)
IF(NOT Threads_FOUND OR NOT CMAKE_USE_PTHREADS_INIT)
    MESSAGE(STATUS "The MKL requires PThreads.")
    RETURN()
ENDIF()

MESSAGE(STATUS "Search for MKL: ${MKL_FRONTEND} ${MKL_MIDDLE} ${MKL_CORE}")
FIND_LIBRARY(MKL64_FRONTEND_LIBRARY NAMES ${MKL_FRONTEND} HINTS ${SEARCH_PATH}   )
FIND_LIBRARY(MKL64_MIDDLE_LIBRARY   NAMES ${MKL_MIDDLE} HINTS ${SEARCH_PATH}   )
FIND_LIBRARY(MKL64_CORE_LIBRARY     NAMES ${MKL_CORE} HINTS ${SEARCH_PATH}   )

IF (NOT( MKL64_FRONTEND_LIBRARY AND MKL64_MIDDLE_LIBRARY AND MKL64_CORE_LIBRARY ))
    RETURN()
ENDIF()

SET(MKL_VERSION_CODE
    "#include <stdio.h>
    #include <stdlib.h>

    struct version_t {int major\; int minor\; int patch\; void* helper[32]\;}\;
    extern void MKL_Get_Version(struct version_t * v)\;

    int main (void) {
    struct version_t v\;
    MKL_Get_Version(&v)\;
    printf(\"%d.%d.%d\",v.major,v.minor,v.patch)\;
    }
    ")

    FILE(WRITE ${CMAKE_BINARY_DIR}/mkltest.c ${MKL_VERSION_CODE})
    TRY_RUN(_RUN_RES _COMPILE_RES ${CMAKE_BINARY_DIR} ${CMAKE_BINARY_DIR}/mkltest.c
        LINK_LIBRARIES ${MKL64_FRONTEND_LIBRARY} ${MKL64_MIDDLE_LIBRARY} ${MKL64_CORE_LIBRARY} ${CMAKE_THREAD_LIBS_INIT} m
        COMPILE_OUTPUT_VARIABLE COMPILE_OUT
        RUN_OUTPUT_VARIABLE RUN_OUT)
    IF(FIND_DEBUG)
        MESSAGE(STATUS "_RUN_RES : ${_RUN_RES}")
        MESSAGE(STATUS "_COMPILE_RES: ${_COMPILE_RES}")
        MESSAGE(STATUS "COMPILE_OUT: ${COMPILE_OUT}")
        MESSAGE(STATUS "RUN_OUT: ${RUN_OUT}")
    ENDIF()
    FILE(REMOVE ${CMAKE_BINARY_DIR}/mkltest.c)

    IF (_RUN_RES AND NOT _COMPILE_RES)
        MESSAGE(STATUS "MKL64 Serial (ILP64) with ${MKL64_FRONTEND_LIBRARY} ${MKL64_MIDDLE_LIBRARY} ${MKL64_CORE_LIBRARY} does not compile an example program.")
    ELSE()
        SET(MklSerial64_LIBRARY ${MKL64_FRONTEND_LIBRARY} ${MKL64_MIDDLE_LIBRARY} ${MKL64_CORE_LIBRARY} ${CMAKE_THREAD_LIBS_INIT} m)
        SET(MklSerial64_VERSION ${RUN_OUT})
    ENDIF()

    #
    # Call ILAVER to obtain LAPACK compatability level
    #
    SET(LAPACK_VERSION_CODE
        "PROGRAM LAPACKV
        INTEGER :: MA,MI,PA
        EXTERNAL ILAVER
        CALL ILAVER(MA, MI, PA)
        WRITE(*,'(I2,\".\",I2,\".\",I2)', advance=\"no\")  MA, MI, PA
        END PROGRAM"
        )

    file(WRITE ${PROJECT_BINARY_DIR}/mkl_lapack_version_test.f90 ${LAPACK_VERSION_CODE})
    try_run(LV_RUN_STATE_Fortran LV_COMPILE_STATE_Fortran
        ${PROJECT_BINARY_DIR} ${PROJECT_BINARY_DIR}/mkl_lapack_version_test.f90
        COMPILE_DEFINITIONS ${I8FLAG}
        LINK_LIBRARIES ${MKL64_FRONTEND_LIBRARY} ${MKL64_MIDDLE_LIBRARY} ${MKL64_CORE_LIBRARY} ${CMAKE_THREAD_LIBS_INIT} m
        RUN_OUTPUT_VARIABLE MKL_LAPACK_VERSION
        COMPILE_OUTPUT_VARIABLE LAPACK_TRY_OUTPUT)
    # MESSAGE(STATUS "${MKL_LAPACK_VERSION}")
    # MESSAGE(STATUS "${LAPACK_TRY_OUTPUT}")

    FILE(REMOVE ${CMAKE_BINARY_DIR}/mkl_lapack_version_test.f90)

    STRING(REPLACE " " "" MklSerial64_LAPACK_VERSION "${MKL_LAPACK_VERSION}")

    MESSAGE(STATUS "MKL64: ${MKL64_FRONTEND_LIBRARY} ${MKL64_MIDDLE_LIBRARY} ${MKL64_CORE_LIBRARY} contains LAPACK ${MklSerial64_LAPACK_VERSION}")

    include(FindPackageHandleStandardArgs)
    find_package_handle_standard_args(MklSerial64 REQUIRED_VARS MklSerial64_LIBRARY)

    UNSET(SEARCH_PATH)
    UNSET(MKL64_FRONTEND_LIBRARY)
    UNSET(MKL64_FRONTEND)
    UNSET(MKL64_MIDDLE_LIBRARY)
    UNSET(MKL_CORE_LIBRARY)
    UNSET(MKL_MIDDLE)
    UNSET(MKL_CORE)
