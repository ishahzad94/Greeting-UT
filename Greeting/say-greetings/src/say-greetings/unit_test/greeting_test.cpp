#include <gtest/gtest.h>
#include "./../greeting.hpp"

TEST(Greeting_tst, test1) {
    greeting::say_greeting Hi("Hello");
    EXPECT_EQ(Hi.str_return(), "Bye");
}