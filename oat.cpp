#include <iostream>
int main() 
{
    const int boiling_temp = 80;
    int oatmeal_temp = 20;
 
    std::cout << "Preparing oatmeal..." << std::endl;
    std::cout << "Current temperature: " << oatmeal_temp << "C" << std::endl;
    while (oatmeal_temp < boiling_temp)
    {
        std::cout << "Stirring oatmeal..." << std::endl;
        oatmeal_temp += 10;
        std::cout << "Current temperature: " << oatmeal_temp << "C" << std::endl;
    }
    std::cout << "Oatmeal is ready!" << std::endl;
    return 0;
}