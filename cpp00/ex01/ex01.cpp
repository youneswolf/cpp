#include "ex01.hpp"

int PhoneBook::index = 0;

void    PhoneBook::ft_exit()
{
    exit(0);
}

int     PhoneBook::ft_add(string f_name, string l_name, string nick, string phone, string secret)
{
    if (this->get_index() < 8)
    {
        Contact c(f_name, l_name,nick, phone, secret);
        this->array[this->get_index()] = c;
    }
    if (this->get_index() >= 8)
    {
       this->array[this->get_index() % 8 - 1].set_first_name(f_name);
       this->array[this->get_index() % 8 - 1].set_last_name(l_name);
       this->array[this->get_index() % 8 - 1].set_nickname(nick);
       this->array[this->get_index() % 8 - 1].set_phone_number(phone);
       this->array[this->get_index() % 8 - 1].set_darkest_secret(secret);
    }
    this->set_index(this->get_index() + 1);
    return (1);
}

int ft_strcmp(string s1, string s2, int i, int j)
{
    int a = 0;
    while (s1[i] && s2[a] && s1[i] == s2[a] && i <= j)
    {
        i++;
        a++;
    }
    if (s2[a] == '\0')
        return (1);
    return (0);
}

int ft_is_it_a_command(string command)
{
    int i = 0, j = command.size() - 1, k = 0;
    while (command[i] == ' ' || command[i] == '\t')
        i++;
    while (j > 0 && command[j] == ' ' || command[j] == '\t')
        j--;
    if (ft_strcmp(command, "ADD", i, j))
        return (1);
    if (ft_strcmp(command, "SEARCH", i, j))
        return (2);
    if (ft_strcmp(command, "EXIT", i, j))
        return (3);
    else
        return (0);
}

void    ft_print(string str, int size)
{
    int i = 0;

    if (size > 10)
    {
        while (i < 9)
        {
            cout << str[i] ;
            i++;
        }
        cout << '.' ;
    }
    else
       cout << std::setw(10) << str;
}

int ft_in_range(string str)
{
    int i = 0, j = str.size() - 1;

    while (str[i] && (str[i] == ' ' || str[i] == '\t'))
        i++;
    while (j >= 0 && str[j] && (str[j] == ' ' || str[j] == '\t'))
        j--;
    if (i - j != 0)
        return (0);
    if (str[i] >= '1' && str[i] <= '8')
        return (1);
    return (0);
}

void    PhoneBook::ft_search()
{
    int i = 0, stop = 0, a = 0;
    string str;
    cout << "|" << std::setw(10) << "index";
    cout << "|" << std::setw(10) << "first name";
    cout << "|" << std::setw(10) << "last name";
    cout << "|" << std::setw(10) << "nickname" << "|" << endl;
    if (this->get_index() > 8)
        stop = 8;
    else
        stop = this->get_index();
    while (i < stop)
    {
        cout << "|";
        cout << std::setw(10) << i;
        cout << "|";
        ft_print(this->array[i].get_first_name(), this->array[i].get_first_name().size());
        cout << "|";
        ft_print(this->array[i].get_last_name(), this->array[i].get_last_name().size());
        cout << "|";
        ft_print(this->array[i].get_nickname(), this->array[i].get_nickname().size());
         cout << "|";
        cout << endl;
        i++;
    }
    cout<< "Enter the index : ";
    getline(cin, str);
    cout << endl;
    if (!ft_in_range(str))
    {
        cout << "index invalid or out of range" << endl;
        return ;
    }
    else if (ft_in_range(str))
    {
        int index = std::stoi(str);
        if (index > this->get_index() - 1)
        {
            cout << "user do not exist" << endl;
            return ;
        }
        cout << "first name :" << this->array[index].get_first_name()<< endl;
        cout << "last name :" << this->array[index].get_last_name()<< endl;
        cout << "nickname :" << this->array[index].get_nickname()<< endl;
        cout << "phone number :" << this->array[index].get_phone_number()<< endl;
        cout << "darkest secret :" << this->array[index].get_darkest_secret()<< endl;
    }
}

int ft_check_phone(string str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return (0);
        i++;
    }
    return (1);
}

int main()
{
    PhoneBook p;
    int i = 1;
    string f_name, l_name, nick, phone, secret, command;
    while (i)
    {
        cout<< "Enter the command (ADD, SEARCH, EXIT):";
        getline(cin, command);
        cout<< "\n";
        if (!ft_is_it_a_command(command))
        {
            continue;
        }
        else if (ft_is_it_a_command(command) == 1)
        {
            cout<< "Enter your first name:";
            getline(cin, f_name);
            cout<< "\n";
            if (f_name.empty())
                continue;
            cout<< "Enter your last name:";
            getline(cin, l_name);
            cout<< "\n";
            if (l_name.empty())
                continue;
            cout<< "Enter your nickname:";
            getline(cin, nick);
            cout<< "\n";
            if (nick.empty())
                continue;
            cout<< "Enter your phone number:";
            getline(cin, phone);
            cout<< "\n";
            if (phone.empty())
                continue;
            cout<< "Enter your darkest secret :";
             getline(cin, secret);
            cout<< "\n";
            if (secret.empty())
                continue;
            if (!ft_check_phone(phone))
            {
                cout << "error in phone number." << endl;
                continue ;
            }
            p.ft_add(f_name, l_name, nick, phone, secret);
        }
        else if (ft_is_it_a_command(command) == 2)
            p.ft_search();
        else if (ft_is_it_a_command(command) == 3)
            p.ft_exit();
    }
}