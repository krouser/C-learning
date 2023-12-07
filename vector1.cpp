#include <iostream>
#include <vector>
 
int main()
{
    std::vector<int> march_dates{ 15, 115, 117, 123, 129 };
    int date;
 
    std::cout << "Enter a day in March (i.e. 123): ";
    std::cin >> date;
 
    switch (date)
    {
    case 15:
        std::cout << "It's Friday! Time to party!" << std::endl;
        break;
    case 115:
        std::cout << "It's the Ides of March. Beware!" << std::endl;
        break;
    case 117:
        std::cout << "It's St. Patrick's Day. Time to wear green!" << std::endl;
        break;
    case 123:
        std::cout << "It's National Puppy Day. Go play with a puppy!" << std::endl;
        break;
    case 129:
        std::cout << "It's National Mom and Pop Business Owners Day. Support small businesses!" << std::endl;
        break;
    default:
        std::cout << "Sorry, there is no event scheduled for that date." << std::endl;
        break;
    }
 
    return 0;
}