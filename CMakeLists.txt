cmake_minimum_required(VERSION 3.27)
project(ComplexLab_main)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ComplexLab_main
        Complex.cpp
        Complex.h
        Test.cpp)
