#include <iostream>
int main()
{
    int *p = new int[5];
    if (p != nullptr)
    {
        std::cout << "Pointer is valid, allocating memory..." << std::endl;
    }
    else
    {
        std::cout << "Pointer is not valid, exiting..." << std::endl;
    }
    return 0;
}