cmake_minimum_required(VERSION 3.6)
project(lab7)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90")

set(SOURCE_FILES Variant51.c)
add_executable(lab7 ${SOURCE_FILES})
target_link_libraries(lab7 m)