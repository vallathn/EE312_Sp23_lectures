cmake_minimum_required(VERSION 3.8)
project(drinking_age)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c)
add_executable(drinking_age ${SOURCE_FILES})