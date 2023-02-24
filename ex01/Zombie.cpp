#include "Zombie.hpp"

void    Zombie::z_name(std::string name)
{
    this->_name = name;
}

void    Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(void)
{
    std::cout << "created" << std::endl;
}

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << this->_name << " created" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << this->_name << " died" << std::endl;
}