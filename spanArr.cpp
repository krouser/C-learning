#include <iostream>
#include <span>
 
void my_function(std::span<int> mybuffer)
{
    for (const int &value : mybuffer)
    {
        std::cout << value << " ";
    }
    std::cout << std::endl;
}
int main()
{
    int myarray[] {1, 2, 3, 4, 5};
    my_function(myarray);
    
    return 0;
}