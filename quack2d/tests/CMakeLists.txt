file(GLOB test_dirs *_test *-dev)

foreach(test_dir ${test_dirs})
    add_subdirectory(${test_dir})
endforeach()