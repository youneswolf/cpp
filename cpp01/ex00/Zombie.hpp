#ifndef ZOMBIE_HPP 
#define ZOMBIE_HPP 

#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;

class Zombie {
string name;
public:
    Zombie(){};
    Zombie(string n);
    ~Zombie();
    void announce( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif
