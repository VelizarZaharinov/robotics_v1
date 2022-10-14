# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_resource_builder_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED resource_builder_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(resource_builder_FOUND FALSE)
  elseif(NOT resource_builder_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(resource_builder_FOUND FALSE)
  endif()
  return()
endif()
set(_resource_builder_CONFIG_INCLUDED TRUE)

# output package information
if(NOT resource_builder_FIND_QUIETLY)
  message(STATUS "Found resource_builder: 1.0.0 (${resource_builder_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'resource_builder' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${resource_builder_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(resource_builder_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${resource_builder_DIR}/${_extra}")
endforeach()
