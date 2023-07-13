project(Quack2DWindow)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

file(GLOB_RECURSE Q2D_WINDOW_SOURCES "*.cpp")

add_library(quack2d_window STATIC ${Q2D_WINDOW_SOURCES})

target_link_libraries(quack2d_window)