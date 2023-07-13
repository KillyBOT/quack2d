project(TestGame)

# Set include directories
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(
    include
    ../quack2d/include
)

file(GLOB_RECURSE TEST_GAME_SOURCE "src/*.cpp")

add_executable(test_game ${TEST_GAME_SOURCE})

target_link_libraries(test_game PRIVATE quack2d)