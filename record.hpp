
#ifndef RECORD_H
#define RECORD_H

#include<string>
#include<unordered_map>
#include<iostream>
#include"sign.hpp"
#include"ColorString.hpp"

struct record
{
    std::string name;
    std::string text;
    significance sign;
    record();
    record(const std::string &nm, const significance &sg, const std::string &txt);
    
    typedef std::string(*FP_COLOR)(const std::string&);
    static std::unordered_map<significance, FP_COLOR> matcher;

public: 
    void show() const;
};
#endif