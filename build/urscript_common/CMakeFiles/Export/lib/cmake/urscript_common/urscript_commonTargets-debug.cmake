#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "urscript_common::urscript_common" for configuration "Debug"
set_property(TARGET urscript_common::urscript_common APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(urscript_common::urscript_common PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/liburscript_common.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS urscript_common::urscript_common )
list(APPEND _IMPORT_CHECK_FILES_FOR_urscript_common::urscript_common "${_IMPORT_PREFIX}/lib/liburscript_common.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
