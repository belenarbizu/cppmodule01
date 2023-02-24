#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int n, std::string name)
{
    Zombie* z;
    int     i;

    z = new Zombie[n];
    i = 0;
    while (i < n)
    {
        z[i]._name = name;
        i++;
    }
    return (z[0]);
}