cmake_minimum_required(VERSION 3.12)
project(Greetings)

# GoogleTest requires at least C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

include_directories(say-greetings/src/say-greetings)
add_subdirectory(say-greetings)
add_subdirectory(say-greetings/src/say-greetings/unit_test)
add_subdirectory(project-exe)