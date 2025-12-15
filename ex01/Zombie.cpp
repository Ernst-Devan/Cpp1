
#include "Zombie.hpp"

Zombie::Zombie()
{
    this->name = "";
}

std::string Zombie::getName()
{
    return (this->name);
}

void    Zombie::setName(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << this->name << ": Destroy" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}