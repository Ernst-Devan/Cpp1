#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *pointer = &str;
    std::string& ref = str;
    
    std::cout << "mem str:" << &str << std::endl;
    std::cout << "mem ptr:" << &pointer << std::endl;
    std::cout << "mem ref:" << &ref << std::endl;

    std::cout << std::endl;

    std::cout << "val str:" << str << std::endl;
    std::cout << "val ptr:" << *pointer << std::endl;
    std::cout << "val ref:" << ref << std::endl;
}
