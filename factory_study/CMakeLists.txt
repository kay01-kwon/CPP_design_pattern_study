cmake_minimum_required(VERSION 3.0)

set(CMAKE_CXX_STANDARD 11)

include_directories(
    include
)

add_executable(factory_study src/factory_study.cpp
include/battleship_class.cpp)
