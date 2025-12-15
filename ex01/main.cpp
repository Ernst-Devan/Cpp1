#include "Zombie.hpp"
#include <iostream>

int main(void)
{
    Zombie *Horde;

    Horde = zombieHorde(5, "test");
    for (int i = 0; i < 5; i++)
    {
        Horde[i].announce();
    }
    delete[] Horde;
    return (0);
}