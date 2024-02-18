#include <iostream>
#include <string>
 
int main()
 
{
    std::string test1{ "שלום" };
    std::string test2{ " سلام" };
 
    std::cout << std::string(test1) << std::endl;
    std::cout << std::string(test2) << std::endl;
}