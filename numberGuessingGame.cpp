#include <iostream>
int main()
{
    int number;
    number = 67;
    std::cout << "Welcome, Please enter your guessed number to win a prize" << std::endl;
    std::cin >> number;
    if (number >= 10)
    {
        std::cout << "please guess a number greater than 10" << std::endl;
        if (number <= 100)
        {
            std::cout << "your number guess is within the permissible range" << std::endl;
            if ( number = 67) 
            {
                std::cout << "you WON!!" << std::endl;
            }
        }
        else
        {
            std::cout << "you are too far off the permissble range of guess" << std::endl;
        }
    }
    else
    {
        std::cout << "Sorry, you cannot input a number below 10" << std::endl;
    }
}
