#include <iostream>
#include <vector>
#include <algorithm>
 
int main()
{
    std::vector<int> numbers{ 2, 4, 6, 8, 10, 12, 14, 16 };
 
    auto minIt = std::min_element(numbers.begin(), numbers.end());
    std::cout << "Minimum element (" << *minIt << ") found using min_element()" << std::endl;
 
    auto maxIt = std::max_element(numbers.begin(), numbers.end());
    std::cout << "Maximum element (" << *maxIt << ") found using max_element()" << std::endl;
 
    std::vector<int> otherNumbers{ 2, 4, 6, 9, 10, 12, 14, 16 };
    auto mismatchIt = std::mismatch(numbers.begin(), numbers.end(), otherNumbers.begin());
    if (mismatchIt.first != numbers.end())
    {
        std::cout << "Mismatch found at index (" << std::distance(numbers.begin(), mismatchIt.first)
            << ") using mismatch()" << std::endl;
    }
    else
    {
        std::cout << "No mismatch found between the ranges." << std::endl;
    }
 
    std::vector<int> sequence{ 6, 8, 10 };
    auto searchIt = std::search(numbers.begin(), numbers.end(), sequence.begin(), sequence.end());
    if (searchIt != numbers.end())
    {
        std::cout << "Subsequence found at index (" << std::distance(numbers.begin(), searchIt)
            << ") using search()" << std::endl;
    }
    else
    {
        std::cout << "Subsequence not found within the range." << std::endl;
    }
 
    int valueToCount = 10;
    int count = std::count(numbers.begin(), numbers.end(), valueToCount);
    std::cout << "Count of " << valueToCount << ": " << count << " using count()" << std::endl;
 
    return 0;
}