#include <iostream> 
int main()
{    
    int trip{};
    int all_trips{};
    std::cout << "Please enter the number of your trips today:" << std::endl;
    std::cin >> trip;
    all_trips = trip;
    all_trips += 1;
    std::cout << "Your intial trip is " << trip << " round journey" << std::endl;
    std::cout << "Your Next Day Total Trips Will Be " << all_trips << " All Round Trips" << std::endl;
}