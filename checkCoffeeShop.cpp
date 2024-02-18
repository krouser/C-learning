#include <iostream>
#include <string>
bool IsCoffeeshopOpen(std::string address, int hour)
{
    if (address == "120 Main Road")
    {
        address = "250 Broadway Avenue";
    }
    if (hour >= 8 && hour <= 18)
    {
        return true;
    }
    else
    {
        return false;
    }
}
 
int main()
{
    std::string MyCoffeeShopAddress{ "120 Main Road" };
    bool IsOpen = IsCoffeeshopOpen(MyCoffeeShopAddress, 12);
    if (IsOpen)
    {
        std::cout << "The coffee shop is open!" << std::endl;
    }
    else
    {
        std::cout << "The coffee shop is closed" << std::endl;
    }
    std::cout << "The up-to-date address is: " << MyCoffeeShopAddress << std::endl;
}