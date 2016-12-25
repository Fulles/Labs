cmake_minimum_required(VERSION 3.6)
project(test1)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90")

set(SOURCE_FILES C.c)
add_executable(test1 ${SOURCE_FILES})