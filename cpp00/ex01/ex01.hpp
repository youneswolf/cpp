#ifndef PHONEBOOK_HPP 
#define PHONEBOOK_HPP 

#include <iostream>
#include <string>
#include <iomanip>
using std::cout;
using std::cin;
using std::string;
using std::endl;

class Contact { 
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
public:
    Contact(void){}
    Contact(string f_name, string l_name, string nick, string phone, string secret){
        first_name = f_name;
        last_name = l_name;
        nickname = nick;
        phone_number = phone;
        darkest_secret = secret;
    }
    std::string get_first_name(){
        return first_name;
    }
    std::string get_last_name(){
        return last_name;
    }
    std::string get_nickname(){
        return nickname;
    }
    std::string get_phone_number(){
        return phone_number;
    }
    std::string get_darkest_secret(){
        return darkest_secret;
    }
    void set_first_name(const std::string& newName) {
        first_name = newName;
    }
    void set_last_name(const std::string& newName) {
        last_name = newName;
    }
    void set_phone_number(const std::string& phone) {
        phone_number = phone;
    }
    void set_nickname(const std::string& newName) {
        nickname = newName;
    }
    void set_darkest_secret(const std::string& newName) {
        darkest_secret = newName;
    }
    
}; 

class PhoneBook { 
private:
    static int index;
public:
    PhoneBook(void){}
    Contact array[8];
    void    ft_search();
    int     ft_add(string f_name, string l_name, string nick, string phone, string secret);
    void    ft_exit();
    int get_index(){
        return index;
    }
    void set_index(int i) {
        index = i;
    }
}; 

#endif
