#include <iostream>
int main()
{
    int zip{ 10034 };
    std::cout << "Please enter one of two zip codes: 10034, or 10093" << std::endl;
    std::cin >> zip;
    if (zip == 10034)
    {
        std::cout << "Street cleaning is every Monday" << std::endl;
    }
    else
    if (zip == 10093)
    {
        std::cout << "street cleaning is every Wednesday" << std::endl;
    }
    else
    {
std::cout << "No valid zip code entered" << std::endl;
    }
}