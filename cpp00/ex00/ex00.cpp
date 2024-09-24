#include <iostream>

using std::cout;
int main(int ac, char *av[])
{
    if (ac == 1)
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    int i = 1, j = 0;
    while (i < ac)
    {
        j = 0;
        while (av && av[i] && av[i][j])
        {
            cout << (char)toupper(av[i][j]);
            j++;
        }
        i++;
    }

    return 0;
}