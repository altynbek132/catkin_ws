cmake_minimum_required(VERSION 3.0.2)
project(lab3)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
)

catkin_package(
)

include_directories(
  ${catkin_INCLUDE_DIRS}
)

add_executable(asdf src/asdf.cpp)
target_link_libraries(asdf ${catkin_LIBRARIES})
add_dependencies(asdf lab3)
