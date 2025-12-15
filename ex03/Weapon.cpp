#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type)
{
    this->_type = type;
}

Weapon::~Weapon(void)
{
    std::cout << this->_type << ": Destroy" << std::endl;
}

const std::string& Weapon::getType()
{
    return (this->_type);
}

void    Weapon::setType(std::string type)
{
    this->_type = type;
}
