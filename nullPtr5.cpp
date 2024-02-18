#include <iostream>
 
int main()
{
    int* age{ nullptr };
    std::cout << "The value of age is " << age << std::endl;
    std::cout << "The address pointed by the pointer *age is " << &age << std::endl;
}