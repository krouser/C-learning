#include <iostream>
#include <algorithm>
#include <vector>
 
int main() 
{
    std::vector<int> numbers = { 1, 2, 3, 5, 4, 6 };

    bool isSorted = std::is_sorted(numbers.begin(), numbers.end());
 
    if (isSorted) 
    {
        std::cout << "The range is sorted in non-decreasing order." << std::endl;
    }
    else 
    {
        std::cout << "The range is not sorted in non-decreasing order." << std::endl;
    }
 
    return 0;
}