#include <iostream>
int main()
{
    int age;
    std::cout << "Please enter your age" << std::endl;
    std::cin >> age;
    if (age >= 16)
    {
        std::cout << "you are over 18 years old" << std::endl;
        if (age <= 100)
        {
            std::cout << "you are eligible to drive" << std::endl;
        }
        else
        {
            std::cout << "but you are too old to drive" << std::endl;
        }
    }
    else
    {
        std::cout << "Sorry, you are too young to drive" << std::endl;
    }
}