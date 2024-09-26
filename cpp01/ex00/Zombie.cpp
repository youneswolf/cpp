#include "Zombie.hpp"

void    Zombie::announce(void)
{
    cout << name << ": BraiiiiiiinnnzzzZ..." << endl; 
}

Zombie::Zombie(string n){
        name = n;
 }

Zombie::~Zombie(){
        cout << "Zombie " << name << "died" << endl;
}