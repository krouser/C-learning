#include <iostream>
 
int main()
{
    int  x5 = 10;
    int *i{ nullptr };
    std::cout << "The value of x is: " << x5 << std::endl;
    i = &x5;
    std::cout << "The value of *i is: " << *i << std::endl;
 
    return 0;
}