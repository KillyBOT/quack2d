project(Quack2DInput)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

file(GLOB_RECURSE Q2D_INPUT_SOURCES "*.cpp")

add_library(quack2d_input STATIC ${Q2D_INPUT_SOURCES})

target_link_libraries(quack2d_input)