#include<iostream>
#include <string>
 
int main() 
{
    std::string string1("Mama Mia");
    std::string string2("Mama Mia");
 
    std::cout << "String 1:" << string1 << std::endl;
    std::cout << "String 2:" << string2 << std::endl;
    int result = string1.compare(string2);
 
    if (result == 0)
    {
        std::cout << "Both strings are equal." << std::endl;
    }
    else if (result < 0)
    {
        std::cout << "String1 is less than String2." << std::endl;
    }
    else
    {
        std::cout << "String1 is greater than string2." << std::endl;
    }
}