project(Quack2DGraphics)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

file(GLOB_RECURSE Q2D_GRAPHICS_SOURCES "*.cpp")

add_library(quack2d_graphics STATIC ${Q2D_GRAPHICS_SOURCES})

target_link_libraries(quack2d_graphics)