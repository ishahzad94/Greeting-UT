add_library(
  say-greetings
  src/say-greetings/greeting.hpp
  src/say-greetings/greeting.cpp)

  target_include_directories(say-greetings PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")