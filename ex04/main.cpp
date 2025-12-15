#include <iostream>
#include <fstream>

int open_file(char *name, std::ifstream &f1)
{
    f1.open(name);
    if (!f1.is_open() || f1.bad() || f1.fail())
        return (1);
    return (0);
}

int create_file(char *name, std::ofstream &f2)
{
    std::string file_name = name; 
    file_name += ".replace";
    f2.open(file_name.c_str());
    if (!f2.is_open() || f2.bad() || f2.fail())
       return (1);
    return (0);
}

void    swap_occurence(std::string s1, std::string s2, std::string &current)
{
    std::size_t found = 0;

    found = current.find(s1);
    while (found!=std::string::npos)
    {
        current.erase(found, s1.length());
        current.insert(found, s2);
        found = current.find(s1, found + 1);
    }
}

int cpy_paste_file(std::ifstream &f1, std::ofstream &f2, char *c1, char *c2)
{
    std::string line;
    std::string s1 = c1;
    std::string s2 = c2;

    while (getline(f1, line))
    {
        if (s1.length() > 0)
            swap_occurence(s1, s2, line);
        f2 << line << std::endl;
    }
    return (0);
}

int close_files(std::ifstream &f1, std::ofstream &f2)
{
    f1.close();
    f2.close();
    return (0);
}

int main(int ac, char **av)
{
    std::ifstream f1;
    std::ofstream f2;

    if (ac != 4)
        return (1);
    if (open_file(av[1], f1))
        return (1);
    if (create_file(av[1], f2))
        return (1);
    if (cpy_paste_file(f1, f2, av[2], av[3]))
        return (1);
    close_files(f1, f2);
    return (0);
}
