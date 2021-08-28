#include"ColorString.hpp"

std::string ColorString::Red(const std::string& str) 
{
    return "\u001b[31m" + str + "\u001b[0m";
}
std::string ColorString::Green(const std::string& str) 
{
    return "\u001b[32m" + str + "\u001b[0m";
}
std::string ColorString::Yellow(const std::string& str) 
{
    return "\u001b[33m" + str + "\u001b[0m";
}
std::string ColorString::Blue(const std::string& str) 
{
    return "\u001b[34m" + str + "\u001b[0m";
}
std::string ColorString::Magenta(const std::string& str) 
{
    return "\u001b[35m" + str + "\u001b[0m";
}
std::string ColorString::Cyan(const std::string& str) 
{
    return "\u001b[36m" + str + "\u001b[0m";
}
std::string ColorString::White(const std::string& str) 
{
    return /*"\u001b[37m" +*/ str /*+ "\u001b[0m"*/;
}
