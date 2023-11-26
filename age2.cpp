#include <iostream>
int main() 
{
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    if (age < 18)
    {
        std::cout << "Sorry, you're not old enough to vote." << std::endl;
    }
    else if (age >= 18 && age < 21)
    {
        std::cout << "You can vote, but you can't buy alcohol." << std::endl;
    }
    else if (age >= 21 && age < 25)
    {
        std::cout << "You can vote and buy alcohol, but you can't rent a car." << std::endl;
    }
    else if (age >= 25 && age < 79)
    {
        std::cout << "You can vote, buy alcohol, and rent a car. Enjoy!" << std::endl;
    }
    else
    {
        std::cout << "You can still vote and buy alcohol, but you're too old to rent a car." << std::endl;
    }
    return 0;
}