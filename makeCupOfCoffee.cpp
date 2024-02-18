#include <iostream>
 
const int forRuth = 1, forMichael = 2, forStan = 3, forLinda = 4, CoffeeToGo = 5;
 
void MakeMyCup(int forWhom)
{
    switch (forWhom)
    {
    case forRuth:
        std::cout << "Preparing a decaf Latte" << std::endl;
        break;
    case forMichael:
        std::cout << "Preparing a strong Cappucino" << std::endl;
        break;
    case forLinda:
        std::cout << "Preparing a good Ovaltine" << std::endl;
        break;    
    case forStan:
        std::cout << "Preparing a strong Cappucino and Honey" << std::endl;
        break;
    case CoffeeToGo:
        std::cout << "Preparing a strong Coffee in the to go packaging" << std::endl;
        break;        
    default:
        std::cout << "What???" << std::endl;
        break;
    }
}
int main()
{
    int forWhom{};
    std::cout << "Whom do you want to coffee to be prepared for?" << std::endl;
    std::cout << "Press 1 for Ruth, 2 for Michael, 3 for Stan, 4 for Linda or 5 for CoffeeToGo:" << std::endl;
    std::cin >> forWhom;
    MakeMyCup(forWhom);
 
}