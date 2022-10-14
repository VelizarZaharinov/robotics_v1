#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "resource_utils::resource_utils" for configuration "Debug"
set_property(TARGET resource_utils::resource_utils APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(resource_utils::resource_utils PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libresource_utils.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS resource_utils::resource_utils )
list(APPEND _IMPORT_CHECK_FILES_FOR_resource_utils::resource_utils "${_IMPORT_PREFIX}/lib/libresource_utils.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
