#ifndef HARL_HPP 
#define HARL_HPP 

#include <iostream>
#include <cstring>
using std::cout;
using std::cin;
using std::string;
using std::endl;

class Harl
{
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
public:
    Harl();
    void    complain( std::string level );
};


#endif