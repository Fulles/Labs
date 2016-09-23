cmake_minimum_required(VERSION 3.6)
project(lab1)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90")

set(SOURCE_FILES Variant51.c)
add_executable(lab1 ${SOURCE_FILES})
target_link_libraries(lab1 m)
