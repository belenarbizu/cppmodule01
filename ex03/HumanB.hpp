#ifndef HUMAN_B_H
#define HUMAN_B_H

#include "Weapon.hpp"

//HumanB puntero porque no siempre tendrá un weapon y se puede establecer en null

class   HumanB {
private:
    Weapon *_weapon;
    std::string _name;
public:
    HumanB(std::string name);
    ~HumanB();

    void    attack(void);
    void    setWeapon(Weapon &weapon);
};

#endif