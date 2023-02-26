#ifndef HUMAN_A_H
#define HUMAN_A_H

#include "Weapon.hpp"
 
//HumanA referencia a Weapon porque no puede establecerse en null

class   HumanA {
private:
    Weapon &_weapon;
    std::string _name;
public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();

    void    attack(void);
};

#endif