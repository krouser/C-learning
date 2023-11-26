#include <iostream>
int main()
{
    int zip{ 10034 };
    std::cout << "Please enter one of two zip codes: 10034, or 10093" << std::endl;
    std::cin >> zip;
    switch (zip)
    {
    case 10034:
        std::cout << "street cleaning is every Monday" << std::endl;
        break;
    case 10093:
        std::cout << "street cleaning is every Wednesday" << std::endl;
        break;
    default:
        std::cout << "No valid zip code entered" << std::endl;
        break;
    }
}