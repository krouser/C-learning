#include <iostream>
#include <array>
 

void ProcessArray(std::array<int, 5> arr)
{
    std::cout << "Processing array: ";
    for (const auto& val : arr)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}
 
int main()
{

    std::array<int, 5> myArray = { 1, 2, 3, 4, 5 };
 

    std::array<int, 5> copyOfArray = myArray;
 

    ProcessArray(copyOfArray);
 
    return 0;
}