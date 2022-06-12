cmake_minimum_required(VERSION 3.6)
project(matrix_code)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES matrix.c)
add_executable(matrix_code ${SOURCE_FILES})