cmake_minimum_required(VERSION 3.6)
project(Examples)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90")

set(SOURCE_FILES Example14.c)
add_executable(Examples ${SOURCE_FILES})
target_link_libraries(Examples m)