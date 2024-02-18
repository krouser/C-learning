#include<iostream> 
#include <string> 


int main()
{
    std::string str1{ "Give papa a cup of proper coffee in a copper coffee cup." };
 
    if (str1.starts_with("Give"))
    {
        std::cout << "The string starts with the substring 'Give'" << std::endl;
    }
    if (str1.ends_with("cup"))
    {
        std::cout << "The string ends with the substring 'cup'" << std::endl;
    }
}