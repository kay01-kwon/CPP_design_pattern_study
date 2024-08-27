cmake_minimum_required(VERSION 3.12)
project(command_pattern)

set(CMAKE_CXX_STANDARD 17)

include_directories(
    include
)

add_executable(command_pattern src/command_pattern.cpp
include/move_class.cpp)