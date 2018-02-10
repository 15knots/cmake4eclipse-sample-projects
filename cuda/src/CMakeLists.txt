# make sure MACRO_FROM_C_INCLPATH_PRJ is defined..
configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h)
include_directories( ${CMAKE_CURRENT_BINARY_DIR})

ADD_DEFINITIONS(-DMACRO_FROM_COMMANDLINE=2)

add_executable(hello-cuda hello-cuda.cu)
add_executable(main main.c)
