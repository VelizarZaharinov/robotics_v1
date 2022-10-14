#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "resource_builder::resource_builder" for configuration "Debug"
set_property(TARGET resource_builder::resource_builder APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(resource_builder::resource_builder PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/resource_builder"
  )

list(APPEND _IMPORT_CHECK_TARGETS resource_builder::resource_builder )
list(APPEND _IMPORT_CHECK_FILES_FOR_resource_builder::resource_builder "${_IMPORT_PREFIX}/bin/resource_builder" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
