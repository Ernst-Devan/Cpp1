#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _weapon(NULL)
{
    this->_name = name;
}

HumanB::~HumanB(void)
{
    std::cout << this->_name << ": Destroy" << std::endl;
}

void    HumanB::setWeapon(Weapon& weapon)
{

    this->_weapon = &weapon;
}

void    HumanB::attack(void)
{
    std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;

}
