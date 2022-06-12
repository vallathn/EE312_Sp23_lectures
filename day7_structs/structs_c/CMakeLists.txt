cmake_minimum_required(VERSION 3.21)
project(sp22_3pm C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DPOLAR")
add_executable(structs_c main.c Complex.c Complex.h)
