#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "robo_miner_common::robo_miner_common" for configuration "Debug"
set_property(TARGET robo_miner_common::robo_miner_common APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(robo_miner_common::robo_miner_common PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/librobo_miner_common.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS robo_miner_common::robo_miner_common )
list(APPEND _IMPORT_CHECK_FILES_FOR_robo_miner_common::robo_miner_common "${_IMPORT_PREFIX}/lib/librobo_miner_common.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
