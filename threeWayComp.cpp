#include <compare>
#include <string>
#include <vector>
#include <iostream>
 
int main() 
{
    std::vector<std::string> vec1{ "apple", "banana", "cherry", "date", "elderberry", "fig" };
    std::vector<std::string> vec2{ "apple", "banana", "cherry", "blueberry", "fig", "grape" };
 
    const auto order = vec1 <=> vec2;
    if (std::is_lt(order))
    {
        std::cout << "vec1 is lexicographically less than vec2" << std::endl;
    }
    else if (std::is_gt(order))
    {
        std::cout << "vec1 is lexicographically greater than vec2" << std::endl;
    }
    else 
    {
        std::cout << "vec1 is lexicographically equal to vec2" << std::endl;
    }
 
    return 0;
}