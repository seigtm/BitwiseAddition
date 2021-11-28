cmake_minimum_required(VERSION 3.5)
project(MyMath)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(ut)
add_library(${PROJECT_NAME} SHARED
    myMath.hpp
    myMath.cpp
)
target_include_directories(${PROJECT_NAME} INTERFACE .)
