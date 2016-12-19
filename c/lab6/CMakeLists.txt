cmake_minimum_required(VERSION 3.6)
project(lab6)

set(CMAKE_C_FLAGS "${CMAKE_CXX_FLAGS} -std=c90")

set(SOURCE_FILES Variant51.c)
add_executable(lab6 ${SOURCE_FILES})
target_link_libraries(lab6 m)