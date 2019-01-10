# Policy
cmake_minimum_required( VERSION 2.8)
 

ENABLE_LANGUAGE(C)

#----------------------
# cmake settings
#----------------------
# include additional cmake modules...

#----------------------
# project build settings
#----------------------

include_directories( "${PROJECT_BINARY_DIR}" "${PROJECT_SOURCE_DIR}/../../../INCLUDE" "/tmp")

add_subdirectory(src)