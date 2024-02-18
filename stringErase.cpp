#include<iostream>  
 
int main()
{
    std::string str = "This book is funny";
    std::cout << "Before we erase the output is: " << str << std::endl;
    str.erase(14, 4);
    std::cout << "After we erase the output is: " << str << std::endl;
    return 0;
}
 