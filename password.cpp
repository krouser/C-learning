#include <iostream>
int main()
{
    std::cout << "Enter your password" << std::endl;
    bool correct_password = false;
    int attempts = 0;
    const int real_password{ 123456 };
    int entered_password{};
        while (attempts <= 3)
        {
            std::cin >> entered_password;
            if (entered_password == real_password)
            {
                correct_password = true;
                break;
            }
            else
            {
                std::cout << "Wrong password. You have " << 3 - attempts << " more attempts" << std::endl;
                attempts++;
            }
        }
            if (correct_password)
            {
                std::cout << "Correct password!" << std::endl;
            }
            else
            {
                std::cout << "Sorry, you had too many failed attempts. Account locked try againg in 30 minutes" << std::endl;
            }
        return 0;
}