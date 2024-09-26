#include "HumainA.hpp"

void HumanA::attack()
{
    cout << this->name<<" attacks with their " << (*w).getType() << endl;
}

HumanA::HumanA(string n, Weapon &a)
{
    this->name = n;
    this->w = &a;
}
