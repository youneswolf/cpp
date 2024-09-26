#include "Zombie.hpp"

int main()
{
    Zombie *test = newZombie("hhh");
    test->announce();
    Zombie test1("dddd");
    test1.announce();
    delete(test);
    randomChump("younes");
}