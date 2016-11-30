cmake_minimum_required(VERSION 3.6)
project(lab_5)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90")

set(SOURCE_FILES Example6.c)
add_executable(lab_5 ${SOURCE_FILES})
target_link_libraries(lab_5 m)