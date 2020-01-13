cmake_minimum_required( VERSION 2.8)
 
# Project name
project(C-inclpath)

# add the binary tree to the search path for include files
# so that we will find config.h
configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h)
include_directories( ${CMAKE_CURRENT_BINARY_DIR} include ../include ${PROJECT_SOURCE_DIR}/../../../INCLUDE)

add_definitions(-DMACRO_FROM_ADD_DEFINITIONS=2)
add_executable(main main.c)
add_executable(main-cpp main2.cpp)
