#include "record_list.hpp"

void RecordList::loadFromFile(std::ifstream &stream)
{
    std::size_t S; //количество записей
    std::string size;
    std::getline(stream, size);
    if(size.empty())
    {
        S = 0;
    }
    else
    {
        S = std::stoull(size);
    }

    std::string currName, currText;
    std::string sig;


    for (std::size_t i{0}; i < S; ++i)
    {
        std::getline(stream, currName);
        std::getline(stream, sig);
        std::getline(stream, currText);


        significance sign = (significance)std::stoi(sig);

        records_list.emplace(std::piecewise_construct,
                             std::forward_as_tuple(currName),
                             std::forward_as_tuple(currName, sign, currText));
    }
}

void RecordList::Instant(std::ifstream &stream)
{
    if (!stream.is_open())
    {
        std::ofstream oFile("file.txt");
        oFile.close();
        stream.open("file.txt");
        if (!stream.is_open())
        {
            throw MyExit::exit("Can not bind a file.\n");
        }

    }
    else
    {
        loadFromFile(stream);
    }
}