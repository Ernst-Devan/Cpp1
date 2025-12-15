#include <iostream>
#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl harl;
    std::string temp;
    if (!av[1])
        return (1);
    if (ac == 2)
    {
        temp = av[1];
        harl.complain(temp);
    }
    return (0);
}

