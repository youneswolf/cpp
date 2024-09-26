#include <iostream>
#include <fstream>
#include <string>
using std::cout;
using std::ofstream;
using std::cin;
using std::string;
using std::endl;

int main(int ac, char **av)
{
    string a =  ".replace", mytext;
    if (ac != 4)
    {
        cout << "error in argument" << endl;
        return (1);
    }
    std::ifstream MyReadFile("filename.txt");

    string s1 = av[2], s2 = av[3];
    string l = av[1]+ a;
    ofstream file(l);
    string buffer;
    while (getline (MyReadFile, mytext)) {
        buffer += mytext;
        buffer += "\n";
    }
    int index = 1;
    while (index != -1)
    {
        index = buffer.find(s1, 0);
        if (index != -1)
        {
            buffer.erase(index, s1.size());
            string first_part = buffer.substr(0, index);
            string second_part = buffer.substr(index, buffer.size());
            buffer = first_part + s2 + second_part;
        }
    }
    file << buffer << endl;
    file.close();
    MyReadFile.close();
    return (0);
}