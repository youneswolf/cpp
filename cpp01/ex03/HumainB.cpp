#include "HumainB.hpp"

void HumanB::attack()
{
    cout << this->name<<" attacks with their "<<(*w).getType() << endl;
}

HumanB::HumanB(string n)
{
    this->name = n;
}

void HumanB::setWeapon(Weapon &n)
{
    this->w = &n;
}


HumanB::HumanB(){}