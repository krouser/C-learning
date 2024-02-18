#include <iostream>
 
int main()
{
    const int x = 5;
    int y = 10;
    const int* const p = &x; 
 
    *p = 10; // Error: Attempting to modify a const variable through a const pointer
    p = &y; // Error: Attempting to assign a new value to a const pointer
 
    std::cout << "The value our pointer points to is " << *p << std::endl;
 
    return 0;
}