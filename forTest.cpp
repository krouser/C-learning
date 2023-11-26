 
#include <iostream>
int main() 
{
    for (int i = 7; i > 0; --i)
    {
        std::cout << i << std::endl;
        if (i == 2)
            break;
    }
    return 0;
}