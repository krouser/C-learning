#include<iostream>
#include <string>
 
int main() 
{
    std::string string1("shenanigans");
    std::string string2("nanni");
 
    const int result{ string1.compare(3, string2.length(), string2) };
 
    if (result == 0)
    {
        std::cout << "string2 is equal to the substring" << std::endl;
    }
    else
    {
        std::cout << "String2 and substring are not equal" << std::endl;
    }
}