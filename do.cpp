#include <iostream>
int main()
{
    char choice{};
    do
    {
        double circle_radius{};
        std::cout << "Please enter the circle radius" << std::endl;
        std::cin >> circle_radius;
        double circle_area{ 3.14 * circle_radius * circle_radius };
        std::cout << "The circle area is " << circle_area << std::endl;
        std::cout << "Do you want to make an additional calculation? (Y / N)" << std::endl;
        std::cin >> choice;
    }
    while (choice == 'y' || choice == 'Y');
    std::cout << "Goodbye" << std::endl;
}