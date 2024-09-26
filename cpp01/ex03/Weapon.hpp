#ifndef WEAPON_HPP 
#define WEAPON_HPP 

#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;

class Weapon {
string type;
public:
    Weapon(){};
    Weapon(string n);
    const string& getType() const;
    void setType(string n);
};

#endif
