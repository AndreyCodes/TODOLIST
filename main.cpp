#include <iostream>
#include <fstream>
#include <string>

#include"ColorString.hpp"
#include"sign.hpp"
#include"record.hpp"
#include"defs.hpp"
#include"ConsoleCommands.hpp"
#include"record_list.hpp"
#include"exitExcp.hpp"


int main()
{
    using ConsoleCommands::commands;
    try
    {
        std::ifstream file("file.txt");
        RecordList::Instant(file);
        file.close();

        while (true)
        {
            std::string inputLine;
            std::cin >> inputLine;

            if(auto c = commands.find(inputLine); c == commands.end())
            {
                std::cout << "Incorrect command, try again\n";
            }
            else
            {
                (*c).second();
            }
        }

    }
    catch (const std::exception &e)
    {
        std::cout << e.what();
        return 0;
    }
    catch(MyExit::BadExit& e)
    {
        std::cout << e.what();
        return 0;
    }
    catch(MyExit::exit&)
    {
        return 0;
    }
}