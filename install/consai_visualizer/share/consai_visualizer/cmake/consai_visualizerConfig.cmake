# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_consai_visualizer_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED consai_visualizer_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(consai_visualizer_FOUND FALSE)
  elseif(NOT consai_visualizer_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(consai_visualizer_FOUND FALSE)
  endif()
  return()
endif()
set(_consai_visualizer_CONFIG_INCLUDED TRUE)

# output package information
if(NOT consai_visualizer_FIND_QUIETLY)
  message(STATUS "Found consai_visualizer: 0.1.0 (${consai_visualizer_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'consai_visualizer' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${consai_visualizer_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(consai_visualizer_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${consai_visualizer_DIR}/${_extra}")
endforeach()
