#include <iostream>
 
int main()
{
    char name[]{ 'P', 'E', 'N', 'E', 'L', 'O', 'P', 'E' };
    for (int i{ 1 }; i <= 7; ++i)
    {
        std::cout << name[i] << std::endl;
    }
}