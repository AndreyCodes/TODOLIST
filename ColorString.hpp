#ifndef COLORSTRING_H
#define COLORSTRING_H
#include<string>
class ColorString
{
private:
    ColorString() = delete;
    ColorString& operator=(const ColorString&) = delete;
public:
    static std::string Red(const std::string& str);
    static std::string Green(const std::string& str);
    static std::string Yellow(const std::string& str);
    static std::string Blue(const std::string& str);
    static std::string Magenta(const std::string& str);
    static std::string Cyan(const std::string& str);
    static std::string White(const std::string& str);
};
#endif