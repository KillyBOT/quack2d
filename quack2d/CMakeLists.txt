project(Quack2D)

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
include_directories(
    include
    ${SDL2_INCLUDE_DIRS}
    ${SDL2_IMAGE_INCLUDE_DIRS}
)

add_subdirectory(src/graphics)
add_subdirectory(src/input)
add_subdirectory(src/window)

file(GLOB_RECURSE Q2D_ENGINE_SOURCES "src/*.cpp")

add_library(quack2d STATIC ${Q2D_ENGINE_SOURCES})

target_link_libraries(quack2d PUBLIC quack2d_input quack2d_graphics quack2d_window ${SDL2_LIBRARIES} ${SDL2_IMAGE_LIBRARIES})