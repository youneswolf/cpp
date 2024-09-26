#include "Harl.hpp"

Harl::Harl(){

};

void Harl::debug( void )
{
    cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << endl;
}

void Harl::info( void )
{
    cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<< endl;
}

void Harl::warning( void )
{
    cout <<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << endl;
}

void Harl::error( void )
{
    cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

void    Harl::complain( std::string level )
{
    void (Harl::*funcArray[4])( void ) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    string str[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    Harl obj;
    int i = 0;
    while (i < 4)
    {
        if (!strcmp(level.c_str(), str[i].c_str()))
            (obj.*funcArray[i])();
        i++;
    }
}