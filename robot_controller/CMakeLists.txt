cmake_minimum_required(VERSION 3.5)
project(robot_controller)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++17
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(control_toolbox REQUIRED)
find_package(robot_command_msgs REQUIRED)
find_package(consai_msgs REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(robocup_ssl_msgs REQUIRED)

include_directories(include)

# Controller Component
add_library(controller_component SHARED
  src/controller_component.cpp
  src/field_info_parser.cpp
  src/geometry_tools.cpp
)
target_compile_definitions(controller_component
  PRIVATE "ROBOT_CONTROLLER_BUILDING_DLL")
ament_target_dependencies(controller_component
  control_toolbox
  robot_command_msgs
  consai_msgs
  rclcpp
  rclcpp_action
  rclcpp_components
  robocup_ssl_msgs
)
rclcpp_components_register_nodes(controller_component "robot_controller::Controller")

# GrSim Command Converter
add_library(grsim_command_converter SHARED
  src/grsim_command_converter.cpp
)
target_compile_definitions(grsim_command_converter
  PRIVATE "ROBOT_CONTROLLER_BUILDING_DLL")
ament_target_dependencies(grsim_command_converter
  robot_command_msgs
  consai_msgs
  rclcpp
  rclcpp_components
  robocup_ssl_msgs
)
rclcpp_components_register_nodes(grsim_command_converter "robot_controller::GrSimCommandConverter")


# Exports
ament_export_targets(export_${PROJECT_NAME} HAS_LIBRARY_TARGET)

ament_export_dependencies(control_toolbox)
ament_export_dependencies(robot_command_msgs)
ament_export_dependencies(consai_msgs)
ament_export_dependencies(rclcpp)
ament_export_dependencies(rclcpp_action)
ament_export_dependencies(rclcpp_components)
ament_export_dependencies(robocup_ssl_msgs)

ament_export_include_directories(include)
ament_export_libraries(controller_component)

# Install
install(
  DIRECTORY include/
  DESTINATION include
)

install(DIRECTORY
  launch
  config
  DESTINATION share/${PROJECT_NAME}/
)

install(TARGETS
  controller_component
  grsim_command_converter
  EXPORT export_${PROJECT_NAME}
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
  INCLUDES DESTINATION include)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  #ament_lint_auto_find_test_dependencies()
endif()

ament_package()
