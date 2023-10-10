#include<iostream>
//#include<string>
//#include<memory>

//#include "say-greetings/greeting.hpp"
#include "gtest/gtest.h"

/*int main(){
    greeting::say_greeting Hi("hello");
    std::cout<<Hi.str_return()<<std::endl;
}*/

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}