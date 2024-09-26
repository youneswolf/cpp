#ifndef HUMANA_HPP 
#define HUMANA_HPP 

#include "Weapon.hpp"

class HumanA
{
public:
    Weapon *w;
    string name;
    HumanA();
    HumanA(string n, Weapon &a);
    void attack();
};


#endif