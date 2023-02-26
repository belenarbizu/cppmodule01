#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _weapon(NULL)
{
    this->_name = name;
}

HumanB::~HumanB()
{
}

void    HumanB::attack(void)
{
    std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

//Paso por referencia: le paso la direccion de memoria y le asigno el valor de la variable

void    HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}