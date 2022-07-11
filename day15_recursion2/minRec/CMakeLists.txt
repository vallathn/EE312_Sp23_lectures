cmake_minimum_required(VERSION 3.6)
project(minRec)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES find_min_recursive.c)
add_executable(minRec ${SOURCE_FILES})