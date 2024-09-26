#include "Zombie.hpp"

int main()
{
    Zombie test;
    Zombie *test1 = test.zombieHorde(10, "younes");
    delete[] test1;
}