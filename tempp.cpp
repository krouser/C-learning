#include <iostream>
int main()
{
    int temperature{ 0 };
    int wind_speed {0};
    bool isWindy = true;
    bool isCold = true;
    std::cout << "What is the temperature (in Celsius)? ";
    std::cin >> temperature;
    std::cout << "How strong is the wind outside from 1 to 10? ";
    std::cin >> wind_speed;
    if(wind_speed >5)
    {
        isWindy = true;
    }
    else
    {
        isWindy = false;
    }
    if (temperature <= 5)
    {
        isCold = true;
    }
    else
    {
        isCold = false;
    }
    if (isWindy && isCold)
    {
        std::cout << "I am not running" << std::endl;
    }
    else
    {
        std::cout << "I am going for a run! Yeah!!!" << std::endl;
    }
 
}