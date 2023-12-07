#include <iostream>
#include <array>
#include <cstddef>
 
int main()
{
 
     std::array <int, 5> arr{ 23, 32, 12, 6, 34 };
 
     for (std::size_t i{ 0 }; i < arr.size(); ++i)
         std::cout << arr[i] << ' ';
 
     std::cout << '\n';
 
        return 0;
    
}