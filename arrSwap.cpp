#include <iostream>
#include <array>
 
int main() 
{
    std::array<int, 5> arr1{ 11, 12, 13, 14, 15 }; 
    std::array<int, 5> arr2{ 16, 17, 18, 19, 10 };
 
    std::cout << "Before swap: "<<std::endl;
    std::cout << "arr1: ";
    for (auto i : arr1) 
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
 
    std::cout << "arr2: ";
    for (auto i : arr2) 
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
 
    arr1.swap(arr2);
 
    std::cout << "After swap: "<<std::endl;
    std::cout << "arr1: ";
    for (auto i : arr1) 
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
 
    std::cout << "arr2: ";
    for (auto i : arr2) 
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
 
    return 0;
}
 