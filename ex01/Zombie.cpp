#include "Zombie.hpp"

void    Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
    std::cout << this->_name << " created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->_name << " died" << std::endl;
}