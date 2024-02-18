#include <iostream>
 
void referenceFunction(int& a, int& b)
{
    a++;
    b++;
}
 
void pointerFunction(int* a, int* b)
{
    (*a)++;
    (*b)++;
}
 
int main() 
{
    int x = 10, y = 20;
    std::cout << "Before referenceFunction: x = " << x << ", y = " << y << std::endl;
    referenceFunction(x, y);
    std::cout << "After referenceFunction: x = " << x << ", y = " << y << std::endl;
    std::cout << "Before pointerFunction: x = " << x << ", y = " << y << std::endl;
    pointerFunction(&x, &y);
    std::cout << "After pointerFunction: x = " << x << ", y = " << y << std::endl;
 
    return 0;
}