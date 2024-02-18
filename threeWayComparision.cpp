#include <compare>
#include <string>
#include <iostream>
 
int main()
{
    std::string sample1 = { "Time flies like an arrow, but fruit flies like a banana." };
    std::string sample2{ "Time flies like an arrow, but fruit flies like bananas." };
 
    const auto order = sample1 <=> sample2;
        if (std::is_lt(order))
        {
            std::cout << "sample1 is less than sample2" << std::endl;
        }
        else if (std::is_gt(order))
        {
            std::cout << "sample1 is more than sample2" << std::endl;
        }
        else
        {
            std::cout << "sample1 is equal to sample2" << std::endl;
        }
}