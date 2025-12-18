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

Zombie* zombieHorde( int N, std::string name );

#endif
