#include "Zombie.hpp"

int main(void)
{
    Zombie* z = zombieHorde(4, "sdz");
    z->announce();
    delete[] z;
}