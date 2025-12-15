#include "Zombie.hpp"

int main(void)
{
    Zombie *heap;

    randomChump("DEVAN");
    heap = newZombie("LEO");
    heap->announce();
    delete heap;
    return (0);
}
