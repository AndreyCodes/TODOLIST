#ifndef CONSOLECOMMANDS_H
#define CONSOLECOMMANDS_H

#include<unordered_map>
#include"defs.hpp"
#include"record_list.hpp"
#include"exitExcp.hpp"
#include<fstream>
namespace ConsoleCommands
{
    using RecordList::records_list;
    void show();
    void add();
    void remove();
    void help();
    void save();
    void exit();
    inline std::unordered_map<std::string, PF> commands{    {std::string{"show"},   show    },
                                                            {std::string{"add"},    add     },
                                                            {std::string{"remove"}, remove  },
                                                            {std::string{"help"},   help    },
                                                            {std::string{"save"},   save    },
                                                            {std::string{"exit"},   exit    },
                                                                                            };

}
#endif