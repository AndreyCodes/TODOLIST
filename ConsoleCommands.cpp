#include"ConsoleCommands.hpp"

void ConsoleCommands::show()
{
    //вывод списка имен дел
    for (const auto &el : records_list)
    {
        std::cout << record::matcher[el.second.sign](el.second.name) << '\n';
    }
    std::cout << '\n';
    std::cout << "Enter a name of record or enter all\n";
    std::string recName;
    std::cin >> recName;

    if (recName == std::string("all"))
    {
        for (const auto &el : records_list)
        {
            el.second.show();
        }
        return;
    }
    if(auto it = records_list.find(recName); it == records_list.end())
    {
        std::cout << "Record with this name does not exist\n";
    }
    else
    {
        (*it).second.show();
    }
}
void ConsoleCommands::add()
{
    record newRec;

    std::cout << "Enter a name of new record\n";
    std::cin.ignore();
    std::getline(std::cin, newRec.name);

    std::cout << "Enter a priority of thing. 1-urgent 2-important 3-interesting 4-ordinary\n";
    int s;
    std::cin >> s;
    newRec.sign = (significance)s;

    std::cout << "place a note, text\n";
    std::cin.ignore();
    std::getline(std::cin, newRec.text);

    records_list.insert({newRec.name, newRec});
}
void ConsoleCommands::remove()
{
    std::cout << "enter a name of record to remove it\n";
    std::string recName;
    std::cin >> recName;
    if (auto it = records_list.find(recName); it != records_list.end())
    {
        records_list.erase(it);
        std::cout << "Record has been removed!\n";
    }
    else
    {
        std::cout << "no such record exist!\n";
    }
}
void ConsoleCommands::help()
{
    std::cout << "show - show the list of records\n";
    std::cout << "add - add a new thing\n";
    std::cout << "remove - remove a record\n";
    std::cout << "help - show help\n";
    std::cout << "save - save to disk\n";
    std::cout << "exit - exit with saving\n";
}
void ConsoleCommands::save()
{
    std::ofstream file("file.txt");
    std::size_t size = records_list.size();
    file << size << '\n';
    for(const auto& el : records_list)
    {
        file << el.second.name << '\n' << el.second.sign << '\n' << el.second.text << '\n';
    }
}
void ConsoleCommands::exit()
{
    save();
    throw MyExit::exit("Normal exit");
}