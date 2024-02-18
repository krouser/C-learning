#include <iostream>
 
int main() 
{
    int *num = new int(42);
 
    std::cout << "Value: " << *num << std::endl;
 
    *num = 100;
 
    std::cout << "Updated Value: " << *num << std::endl;
 
    return 0;
}