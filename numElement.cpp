#include <iostream>
 
int main() 
{
    const int NUM_ELEMENTS = 5;
    int nums[NUM_ELEMENTS] = { 1, 2, 3, 4, 5 };
 
    std::cout << "Enter a number to search for: ";
    int searchNum;
    std::cin >> searchNum;
 
    bool found = false;
    int index = 0;
    for (int num : nums)
    {
        if (num == searchNum)
        {
            found = true;
            break;
        }
        ++index;
    }
 
    if (found)
    {
        std::cout << searchNum << " was found at index " << index << std::endl;
    }
    else 
    {
        std::cout << searchNum << " was not found in the array" << std::endl;
    }
 
    return 0;
}