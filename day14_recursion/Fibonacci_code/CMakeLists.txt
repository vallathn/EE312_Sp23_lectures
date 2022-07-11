cmake_minimum_required(VERSION 3.6)
project(Fibonacci_code)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES EE312_recursion.c)
add_executable(Fibonacci_code ${SOURCE_FILES})