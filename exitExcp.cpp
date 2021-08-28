#include"exitExcp.hpp"
MyExit::exit::exit(const std::string& arg) : info(arg) {}
const std::string& MyExit::exit::what() const {return info;}