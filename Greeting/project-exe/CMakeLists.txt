enable_testing()
add_executable(greetings main.cpp)
target_link_libraries(
    greetings PRIVATE say-greetings
    GTest::gtest_main)
include(GoogleTest)
gtest_discover_tests(greetings)