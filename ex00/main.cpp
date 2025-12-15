#include "Zombie.hpp"

int main(void)
{
    Zombie *stack;

    randomChump("DEVAN");
    stack = newZombie("LEO");
    stack->announce();
    delete stack;
    return (0);
}