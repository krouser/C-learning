#include<iostream>
#include <string>
 
int main()
{
    std::string test{ "" };
    std::cout << "Please type any sentence" << std::endl;
    getline(std::cin, test);
    std::cout << "your input was: " << test << std::endl;
}
 