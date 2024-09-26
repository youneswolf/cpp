#include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name )
{
    int i = 0;
    Zombie *zombie_arr = new Zombie[N];
    while (i < N)
    {
        zombie_arr[i].name = name;
        // zombie_arr[i].announce();
        i++;
    }
    return (zombie_arr);
}