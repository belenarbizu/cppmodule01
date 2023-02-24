#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class   Zombie {
private:
    std::string _name;

public:
    Zombie(std::string name);
    Zombie();
    ~Zombie();

    void    z_name(std::string name);
    void    announce(void);
};

#endif