cmake_minimum_required(VERSION 3.21)
project(f22_pm)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(f22_pm
        Point.cpp
        Point.h)
