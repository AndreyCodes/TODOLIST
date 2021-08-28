#include"record.hpp"

void record::show() const
{
    std::cout << name << "\t-\t" << text<< '\n';
}

record::record(){}

record::record(const std::string &nm, const significance &sg, const std::string &txt)  : name(nm), text(txt), sign(sg) {}
std::unordered_map<significance, record::FP_COLOR> record::matcher{ {significance::URGENTLY, ColorString::Red},
                                                                    {significance::IMPORTANT, ColorString::Yellow},
                                                                    {significance::INTERESTING, ColorString::Green},
                                                                    {significance::ORDINARY, ColorString::White}};