#include <iostream>
 
int main()
{
    int grades[]{ 60, 98, 46, 84, 55, 100, 67 };
    int i{ 0 };
    while (i < 7)
    {
        std::cout << grades[i] << std::endl;
        ++i;
    }
 
    return 0;
}