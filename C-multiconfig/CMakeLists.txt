cmake_minimum_required( VERSION 3.0)

project(C-multiconfig)

message( STATUS "CMAKE_INSTALL_PREFIX = ${CMAKE_INSTALL_PREFIX}" )

include_directories( "${PROJECT_BINARY_DIR}")
add_definitions(-DC1SRC=2 -DBAR123=1)
add_executable(EXECUTABLE main.c)
