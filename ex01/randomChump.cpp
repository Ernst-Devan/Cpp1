#include "Zombie.hpp"
#include <iostream>

void   randomChump(std::string name)
{
    Zombie temp;

    temp.setName(name);
    temp.announce();
}