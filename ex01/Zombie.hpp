#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class   Zombie {
private:
    std::string _name;

public:
    Zombie();
    ~Zombie();

    Zombie* zombieHorde(int n, std::string name);
    void    announce(void);
};

#endif