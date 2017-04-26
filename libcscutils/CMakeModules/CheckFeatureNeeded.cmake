INCLUDE (CheckSymbolExists)
MACRO(CHECK_FEATURE_NEEDED SYMBOL FILES VARIABLE_FOUND VARIABLE_DEFINE) 
	SET(_FEATURES 
		"_NONE_"
		"_POSIX_C_SOURCE=1"
		"_POSIX_C_SOURCE=200112L"
		"_POSIX_C_SOURCE=200809L"
		"_XOPEN_SOURCE=500"
		"_GNU_SOURCE"
		"_BSD_SOURCE"
		${ARGN})

	SET(${VARIABLE_FOUND} FALSE) 
	SET(${VARIABLE_DEFINE} "")

	SET(_DEFS ${CMAKE_REQUIRED_DEFINITIONS}	) 
	SET(_QUIET ${CMAKE_REQUIRED_QUIET})
	SET(CMAKE_REQUIRED_QUIET TRUE) 

	MESSAGE(STATUS "Looking for ${SYMBOL}") 
	FOREACH(_FEATURE ${_FEATURES}) 
		SET(CMAKE_REQUIRED_DEFINITIONS "-D${_FEATURE}")
		UNSET(_NEED_FEATURE_FOUND CACHE) 
		
		
		CHECK_SYMBOL_EXISTS(${SYMBOL} ${FILES} _NEED_FEATURE_FOUND)

		IF (_NEED_FEATURE_FOUND ) 
			MESSAGE(STATUS "Looking for ${SYMBOL} - found (using ${_FEATURE}).")
			SET(${VARIABLE_FOUND} TRUE)
			SET(${VARIABLE_DEFINE} "-D${_FEATURE}")
			BREAK()
		ENDIF()
	ENDFOREACH()
	IF (NOT ${VARIABLE_FOUND}) 
		MESSAGE(STATUS "Looking for ${SYMBOL} - not found.")
	ENDIF()
	SET(CMAKE_REQUIRED_DEFINITIONS ${_DEFS})
	SET(CMAKE_REQUIRED_QUIET ${_QUIET}) 
ENDMACRO()

