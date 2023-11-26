#include <iostream>
#include <array>
 
int main()
{
    std::array<char, 10> a;
    a[0] = 'h';
    a[1] = 'e';
    a[2] = 'l';
    a[3] = 'l';
    a[4] = 'o';
 
    std::cout << "Array contents: ";
    for (char c : a) 
    {
        std::cout << c;
    }
    std::cout << std::endl;
 
    std::cout << "Printing characters until null terminator: ";
    bool hasNullTerminator = false;
    for (char c : a) 
    {
        if (c == '\0') 
        {
            hasNullTerminator = true;
            break;
        }
        std::cout << c;
    }
    std::cout << std::endl;
 
    if (!hasNullTerminator) 
    {
        std::cout << "Warning: no null terminator found in the string." << std::endl;
    }
 
    return 0;
}