#include "Weapon.hpp"

const string& Weapon::getType() const
{
    return (type);
}

void Weapon::setType(string n)
{
    type = n;
}

Weapon::Weapon(string n)
{
    type = n;
}