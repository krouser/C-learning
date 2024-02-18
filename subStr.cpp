#include <iostream>
#include <string>
 
 
int main()
{
    std::string str = "I am learning all about C++ strings";
 
    std::string my_substr;
    my_substr = str.substr(0, 1);
    std::cout << "The first substring is: " << my_substr << std::endl;
 
    my_substr = str.substr(5, 8);
    std::cout << "The second substring is: " << my_substr << std::endl;
 
    return 0;
}