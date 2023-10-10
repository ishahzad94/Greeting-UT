#include "greeting.hpp"
#include <iostream>

const std::string &greeting::say_greeting::str_return() const
{
    return str;
}
