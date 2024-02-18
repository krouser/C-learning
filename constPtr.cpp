#include <iostream>
 
int main()
{
    const int x = 5;
    int y{ 10 };
    int *p = &x;
    p = &y;
    std::cout << "The value our pointer points to is " << *p << std::endl;
 
}