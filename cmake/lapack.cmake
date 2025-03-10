IF (LAPACK)
    ADD_DEFINITIONS(-DFLEXIBLAS_LAPACK)
    IF (NOT SYS_LAPACK_LIBRARY)
        IF(NOT LAPACK_API_VERSION)
            SET (LAPACK_API_VERSION "3.12.0")
        ENDIF()
    ELSE()
        IF ( NOT LAPACK_API_VERSION )
            SET(LAPACK_DPRC_CODE
                "PROGRAM LAPACKD
                EXTERNAL DGEGS
                CALL DGEGS()
                END PROGRAM")
                file(WRITE ${PROJECT_BINARY_DIR}/lapack_deprecated_test.f90 ${LAPACK_DPRC_CODE})

                SET(LAPACK_VERSION_CODE
                    "PROGRAM LAPACKV
                    INTEGER :: MA,MI,PA
                    EXTERNAL ILAVER
                    CALL ILAVER(MA, MI, PA)
                    WRITE(*,'(I2,\".\",I2,\".\",I2)', advance=\"no\")  MA, MI, PA
                    END PROGRAM")

                    file(WRITE ${PROJECT_BINARY_DIR}/lapack_version_test.f90 ${LAPACK_VERSION_CODE})
                    try_run(LV_RUN_STATE_Fortran LV_COMPILE_STATE_Fortran
                        ${PROJECT_BINARY_DIR} ${PROJECT_BINARY_DIR}/lapack_version_test.f90
                        LINK_LIBRARIES ${SYS_LAPACK_LIBRARY}
                        RUN_OUTPUT_VARIABLE SYS_LAPACK_VERSION
                        COMPILE_OUTPUT_VARIABLE LAPACK_TRY_OUTPUT)

                    try_compile(LV_COMPILE_DEPRECATED ${PROJECT_BINARY_DIR} ${PROJECT_BINARY_DIR}/lapack_deprecated_test.f90
                        LINK_LIBRARIES ${SYS_LAPACK_LIBRARY})

                    IF(NOT LV_COMPILE_DEPRECATED AND SYS_LAPACK_LIBRARY VERSION_GREATER_EQUAL 3.6.0)
                        SET(SYS_LAPACK_VERSION "${SYS_LAPACK_VERSION}-wodprc")
                    ENDIF()

                    IF ( NOT LV_COMPILE_STATE_Fortran )
                        MESSAGE(FATAL_ERROR "Compiling the LAPACK version tool failed: ${LAPACK_TRY_OUTPUT}")
                        MESSAGE(STATUS "LV_RUN_STATE_Fortran  ${LV_RUN_STATE_Fortran}")
                        MESSAGE(STATUS "LV_COMPILE_STATE_Fortran ${LV_COMPILE_STATE_Fortran}")
                    ENDIF()
                    STRING(REPLACE " " "" LAPACK_API_VERSION "${SYS_LAPACK_VERSION}")
                    MESSAGE(STATUS "Use external LAPACK from ${SYS_LAPACK_LIBRARY} with assumed API_VERSION ${LAPACK_API_VERSION}")
                ELSE ()
                    MESSAGE(STATUS "Use external LAPACK from ${SYS_LAPACK_LIBRARY} with API_VERSION ${LAPACK_API_VERSION}")
                ENDIF()

            ENDIF()
        ELSE()
            IF(NOT LAPACK_API_VERSION)
                SET (LAPACK_API_VERSION "3.12.0")
            ENDIF()
        ENDIF()

        IF ( LAPACK AND NOT LAPACK_API_VERSION )
            MESSAGE(FATAL_ERROR "LAPACK_API_VERSION needs to be set.")
        ENDIF()
        #
        # LAPACK
        #
        IF ( LAPACK AND LAPACK_API_VERSION STREQUAL "3.12.0")
            SET ( FLEXIBLAS_LAPACK_3_12_0 TRUE)
            SET ( FLEXIBLAS_LAPACK_VERSION 3.12.0)
        ENDIF ()

        IF ( LAPACK AND LAPACK_API_VERSION STREQUAL "3.12.0-wodprc")
            SET ( FLEXIBLAS_LAPACK_3_12_0_WODPRC TRUE)
            SET ( FLEXIBLAS_LAPACK_VERSION 3.12.0)
        ENDIF ()

        IF ( LAPACK AND LAPACK_API_VERSION STREQUAL "3.11.0")
            SET ( FLEXIBLAS_LAPACK_3_11_0 TRUE)
            SET ( FLEXIBLAS_LAPACK_VERSION 3.11.0)
        ENDIF ()

        IF ( LAPACK AND LAPACK_API_VERSION STREQUAL "3.11.0-wodprc")
            SET ( FLEXIBLAS_LAPACK_3_11_0_WODPRC TRUE)
            SET ( FLEXIBLAS_LAPACK_VERSION 3.11.0)
        ENDIF ()


        IF ( LAPACK AND LAPACK_API_VERSION STREQUAL "3.10.1")
            SET ( FLEXIBLAS_LAPACK_3_10_1 TRUE)
            SET ( FLEXIBLAS_LAPACK_VERSION 3.10.1)
        ENDIF ()

        IF ( LAPACK AND LAPACK_API_VERSION STREQUAL "3.10.1-wodprc")
            SET ( FLEXIBLAS_LAPACK_3_10_1_WODPRC TRUE)
            SET ( FLEXIBLAS_LAPACK_VERSION 3.10.1)
        ENDIF ()


        IF ( LAPACK AND LAPACK_API_VERSION STREQUAL "3.10.0")
            SET ( FLEXIBLAS_LAPACK_3_10_0 TRUE)
            SET ( FLEXIBLAS_LAPACK_VERSION 3.10.0)
        ENDIF ()

        IF ( LAPACK AND LAPACK_API_VERSION STREQUAL "3.10.0-wodprc")
            SET ( FLEXIBLAS_LAPACK_3_10_0_WODPRC TRUE)
            SET ( FLEXIBLAS_LAPACK_VERSION 3.10.0)
        ENDIF ()


        IF ( LAPACK AND LAPACK_API_VERSION STREQUAL "3.9.1")
            SET ( FLEXIBLAS_LAPACK_3_9_1 TRUE)
            SET ( FLEXIBLAS_LAPACK_VERSION 3.9.1)
        ENDIF ()

        IF ( LAPACK AND LAPACK_API_VERSION STREQUAL "3.9.1-wodprc")
            SET ( FLEXIBLAS_LAPACK_3_9_1_WODPRC TRUE)
            SET ( FLEXIBLAS_LAPACK_VERSION 3.9.1)
        ENDIF ()


        IF ( LAPACK AND LAPACK_API_VERSION STREQUAL "3.9.0")
            SET ( FLEXIBLAS_LAPACK_3_9_0 TRUE)
            SET ( FLEXIBLAS_LAPACK_VERSION 3.9.0)
        ENDIF ()

        IF ( LAPACK AND LAPACK_API_VERSION STREQUAL "3.9.0-wodprc")
            SET ( FLEXIBLAS_LAPACK_3_9_0_WODPRC TRUE)
            SET ( FLEXIBLAS_LAPACK_VERSION 3.9.0)
        ENDIF ()

        IF ( LAPACK AND LAPACK_API_VERSION STREQUAL "3.8.0")
            SET ( FLEXIBLAS_LAPACK_3_8_0 TRUE)
            SET ( FLEXIBLAS_LAPACK_VERSION 3.8.0)
        ENDIF ()

        IF ( LAPACK AND LAPACK_API_VERSION STREQUAL "3.8.0-wodprc")
            SET ( FLEXIBLAS_LAPACK_3_8_0_WODPRC TRUE)
            SET ( FLEXIBLAS_LAPACK_VERSION 3.8.0)
        ENDIF ()

        IF ( LAPACK AND LAPACK_API_VERSION STREQUAL "3.7.1")
            SET ( FLEXIBLAS_LAPACK_3_7_0 TRUE)
            SET ( FLEXIBLAS_LAPACK_VERSION 3.7.0)
        ENDIF ()

        IF ( LAPACK AND LAPACK_API_VERSION STREQUAL "3.7.1-wodprc")
            SET ( FLEXIBLAS_LAPACK_3_7_0_WODPRC TRUE)
            SET ( FLEXIBLAS_LAPACK_VERSION 3.7.0)
        ENDIF ()

        IF ( LAPACK AND LAPACK_API_VERSION STREQUAL "3.7.0")
            SET ( FLEXIBLAS_LAPACK_3_7_0 TRUE)
            SET ( FLEXIBLAS_LAPACK_VERSION 3.7.0)
        ENDIF ()

        IF ( LAPACK AND LAPACK_API_VERSION STREQUAL "3.7.0-wodprc")
            SET ( FLEXIBLAS_LAPACK_3_7_0_WODPRC TRUE)
            SET ( FLEXIBLAS_LAPACK_VERSION 3.7.0)
        ENDIF ()

        IF ( LAPACK AND LAPACK_API_VERSION STREQUAL "3.6.1")
            SET ( FLEXIBLAS_LAPACK_3_6_1 TRUE)
            SET ( FLEXIBLAS_LAPACK_VERSION 3.6.1)
        ENDIF ()

        IF ( LAPACK AND LAPACK_API_VERSION STREQUAL "3.6.1-wodprc")
            SET ( FLEXIBLAS_LAPACK_3_6_1_WODPRC TRUE)
            SET ( FLEXIBLAS_LAPACK_VERSION 3.6.1)
        ENDIF ()

        IF ( LAPACK AND LAPACK_API_VERSION STREQUAL "3.6.0")
            SET ( FLEXIBLAS_LAPACK_3_6_0 TRUE)
            SET ( FLEXIBLAS_LAPACK_VERSION 3.6.1)
        ENDIF ()

        IF ( LAPACK AND LAPACK_API_VERSION STREQUAL "3.6.0-wodprc")
            SET ( FLEXIBLAS_LAPACK_3_6_0_WODPRC TRUE)
            SET ( FLEXIBLAS_LAPACK_VERSION 3.6.1)
        ENDIF ()

        IF ( LAPACK AND LAPACK_API_VERSION STREQUAL "3.5.0")
            SET ( FLEXIBLAS_LAPACK_3_5_0 TRUE)
            SET ( FLEXIBLAS_LAPACK_VERSION 3.6.1)
        ENDIF ()

        IF ( LAPACK AND LAPACK_API_VERSION STREQUAL "3.4.2")
            SET ( FLEXIBLAS_LAPACK_3_4_2 TRUE)
            SET ( FLEXIBLAS_LAPACK_VERSION 3.6.1)
        ENDIF ()

        IF ( LAPACK AND LAPACK_API_VERSION STREQUAL "3.4.1")
            SET ( FLEXIBLAS_LAPACK_3_4_1 TRUE)
            SET ( FLEXIBLAS_LAPACK_VERSION 3.6.1)
        ENDIF ()

        IF ( LAPACK AND LAPACK_API_VERSION STREQUAL "3.4.0")
            SET ( FLEXIBLAS_LAPACK_3_4_0 TRUE)
            SET ( FLEXIBLAS_LAPACK_VERSION 3.6.1)
        ENDIF ()

        IF ( LAPACK AND LAPACK_API_VERSION STREQUAL "3.3.1")
            SET ( FLEXIBLAS_LAPACK_3_3_1 TRUE)
            SET ( FLEXIBLAS_LAPACK_VERSION 3.6.1)
        ENDIF ()

        IF ( LAPACK AND LAPACK_API_VERSION STREQUAL "3.3.0")
            SET ( FLEXIBLAS_LAPACK_3_3_0 TRUE)
            SET ( FLEXIBLAS_LAPACK_VERSION 3.6.1)
        ENDIF ()

        IF(LAPACK AND NOT FLEXIBLAS_LAPACK_VERSION )
            MESSAGE(FATAL_ERROR "No LAPACK API version specified. Use the LAPACK_API_VERSION variable.")
        ENDIF()


        IF(NOT SYS_BLAS_LIBRARY)
            add_subdirectory(contributed/netlib-blas/)
        ENDIF()


        IF (LAPACK AND NOT SYS_LAPACK_LIBRARY)
            IF (FLEXIBLAS_LAPACK_3_12_0 OR FLEXIBLAS_LAPACK_3_12_0_WODPRC)
                add_subdirectory(contributed/lapack-3.12.0)
            ELSEIF (FLEXIBLAS_LAPACK_3_11_0 OR FLEXIBLAS_LAPACK_3_11_0_WODPRC)
                add_subdirectory(contributed/lapack-3.11.0)
            ELSEIF (FLEXIBLAS_LAPACK_3_10_1 OR FLEXIBLAS_LAPACK_3_10_1_WODPRC)
                add_subdirectory(contributed/lapack-3.10.1)
            ELSEIF (FLEXIBLAS_LAPACK_3_10_0 OR FLEXIBLAS_LAPACK_3_10_0_WODPRC)
                add_subdirectory(contributed/lapack-3.10.0)
            ELSEIF (FLEXIBLAS_LAPACK_3_9_1 OR FLEXIBLAS_LAPACK_3_9_1_WODPRC)
                add_subdirectory(contributed/lapack-3.9.1)
            ELSEIF (FLEXIBLAS_LAPACK_3_9_0 OR FLEXIBLAS_LAPACK_3_9_0_WODPRC)
                add_subdirectory(contributed/lapack-3.9.0)
            ELSEIF (FLEXIBLAS_LAPACK_3_8_0 OR FLEXIBLAS_LAPACK_3_8_0_WODPRC)
                add_subdirectory(contributed/lapack-3.8.0)
            ELSEIF (FLEXIBLAS_LAPACK_3_7_0 OR FLEXIBLAS_LAPACK_3_7_0_WODPRC)
                add_subdirectory(contributed/lapack-3.7.0)
            ELSEIF (FLEXIBLAS_LAPACK_3_6_1 OR FLEXIBLAS_LAPACK_3_6_1_WODPRC)
                add_subdirectory(contributed/lapack-3.6.1)
            ELSE () # Fallback
                add_subdirectory(contributed/lapack-3.12.0)
            ENDIF()
        ENDIF()


        IF ( LAPACK_API_VERSION VERSION_LESS "3.6.1" )
            MESSAGE(WARNING "The requested LAPACK_VERSION is less than 3.6.1. We recommend to use a newer API version.")
        ENDIF()
