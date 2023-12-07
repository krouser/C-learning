#include <iostream>
#include <array>
 
int main() 
{
    std::array<int, 25> arr{};
 
    arr.fill(10);
 
    for (auto i : arr) 
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
 
    return 0;
}