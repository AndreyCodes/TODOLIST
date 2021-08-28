#ifndef EXITEXCP_H
#define EXITEXCP_H
#include<string>
namespace MyExit
{
    class exit
    {
        std::string info;
    public:
        explicit exit(const std::string& arg);
        const std::string& what() const;
    };
    class BadExit : public exit
    {

    };
}
#endif