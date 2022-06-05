cmake_minimum_required(VERSION 3.7)
project(arrayFunction)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES arrayFunction.h arrayFunction.c ArrayFunctionMain.c)
add_executable(arrayFunction ${SOURCE_FILES})