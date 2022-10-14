#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ros2_game_engine::ros2_game_engine" for configuration "Debug"
set_property(TARGET ros2_game_engine::ros2_game_engine APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(ros2_game_engine::ros2_game_engine PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libros2_game_engine.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS ros2_game_engine::ros2_game_engine )
list(APPEND _IMPORT_CHECK_FILES_FOR_ros2_game_engine::ros2_game_engine "${_IMPORT_PREFIX}/lib/libros2_game_engine.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
