#include <iostream> 

int main()
{
    int sonAge{ 1 };
    char favoriteClothe{'W'};
    float price{ 3.14159 };
    double distanceToMoon{ 238855.947 };
    bool isSmiling{ true };
    std::cout << "My son's age is " << sonAge << " years." << std::endl;
    std::cout << "My favorite clothe is " << favoriteClothe << "." << std::endl;
    std::cout << "The value of price is approximately " << price << "." << std::endl;
    std::cout << "The house distance to the moon is " << distanceToMoon << " miles." << std::endl;
    std::cout << "Is the sun shining? " << std::boolalpha << isSmiling << std::endl;
    return 0;
}