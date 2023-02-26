#include "HumanA.hpp"

void    HumanA::attack(void)
{
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}

//Hay que inicializar _weapon ya que en la declaracion de la clase no lo hacemos

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
{
    this->_name = name;
}

HumanA::~HumanA()
{
}