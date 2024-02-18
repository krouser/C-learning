#include <iostream>
 
int main()
{
    int num{ 55 };
    int *pNum = &num;
    std::cout << "The value of num is " << *pNum << std::endl;
    std::cout << "The pointer pNum points to the address: " << &num;
}