
#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie {
private:
  std::string name;

public:
  Zombie();
  ~Zombie();
  void setName(std::string name);
  std::string getName();
  void announce(void);

};

void   randomChump(std::string name);
Zombie* newZombie(std::string name);
Zombie* zombieHorde( int N, std::string name );

#endif
