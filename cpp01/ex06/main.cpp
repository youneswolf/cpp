#include "Harl.hpp"

int main(int ac, char *av[])
{
    if (ac == 2)
    {
        string str[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
        string s1 = av[1];
        int flag = 0;
        int i = 0;
        Harl test;
        while (i < 4)
        {
            int res = strcmp(s1.c_str(), str[i].c_str());
            if (!res)
            {
                flag = 1;
                int a = i;
                while (a < 4)
                {
                    cout << "[" << str[a] << "]" << endl; 
                    test.complain(str[a]);
                    a++;
                }
            }
            i++;
        }
        if (!flag)
            cout << "[ Probably complaining about insignificant problems ]" << endl;
    }
    return (0);
}
