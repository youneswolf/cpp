#ifndef HUMANB_HPP 
#define HUMANB_HPP 

#include "Weapon.hpp"

class HumanB
{
public:
    Weapon *w;
    string name;
    HumanB();
    HumanB(string n);
    void attack();
    void setWeapon(Weapon &n);
};


#endif