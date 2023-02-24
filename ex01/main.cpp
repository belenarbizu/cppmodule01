#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name);

int main(void)
{
    int n;

    n = 4;
    Zombie* z = zombieHorde(n, "sdz");
    for (int i = 0; i < n; i++)
        z->announce();
    delete[] z;

    return (0);
}