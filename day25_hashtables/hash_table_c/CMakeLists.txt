cmake_minimum_required(VERSION 3.7)
project(hash_tables_c)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES hash_table.c)
add_executable(hash_table_c ${SOURCE_FILES})
