cmake_minimum_required(VERSION 3.17)
project(variable_types C)

set(CMAKE_C_STANDARD 11)

add_executable(variable_types variable_types.c additional.c)
