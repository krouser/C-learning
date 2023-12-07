#include <iostream>
#include <array>
 
int main()
{
    std::array <int, 5> arr{ 23, 32, 12, 6, 34 };
 
    for (int i{ 0 }; i < arr.size(); ++i)
        std::cout << arr[i] << ' ';
 
    std::cout << '\n';
 
    return 0;
}