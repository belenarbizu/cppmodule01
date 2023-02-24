#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name)
{
    Zombie* z;

    z = new Zombie[n];
    for (int i = 0; i < n; i++)
        z[i].z_name(name);
    return (z);
}