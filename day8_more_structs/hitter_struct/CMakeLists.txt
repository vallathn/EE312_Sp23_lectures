cmake_minimum_required(VERSION 3.7)
project(hitter_struct)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES hitter.c)
add_executable(hitter_struct ${SOURCE_FILES})