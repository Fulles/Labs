cmake_minimum_required(VERSION 3.6)
project(lab8)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90")

set(SOURCE_FILES Example4.c)
add_executable(lab8 ${SOURCE_FILES})