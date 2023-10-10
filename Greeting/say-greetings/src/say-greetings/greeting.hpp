#pragma once

#include<string>
#include<memory>

namespace greeting
{
    class say_greeting
    {
    private:
        std::string str;
    public:
        say_greeting(){};
        say_greeting(const std::string& str_):str(str_){};
        const std::string& str_return()const;
    };
    
} // namespace greeting