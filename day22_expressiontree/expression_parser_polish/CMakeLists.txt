cmake_minimum_required(VERSION 3.7)
project(expression_parser_polish)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES pn.cpp)
add_executable(expression_parser_polish ${SOURCE_FILES})