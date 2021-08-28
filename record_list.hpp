#ifndef RECORD_LIST_H
#define RECORD_LIST_H
#include<unordered_map>
#include<fstream>
#include"record.hpp"
#include "exitExcp.hpp"
namespace RecordList
{
    inline std::unordered_map<std::string, record> records_list;
    void loadFromFile(std::ifstream &stream);
    void Instant(std::ifstream &stream);
}
#endif