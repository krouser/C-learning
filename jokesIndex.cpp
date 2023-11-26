#include <iostream>
 
int main()
{
    int jokes[] = { 0, 0, 0, 0 };
    int jokeIndex = 0;
    bool keepTellingJokes = true;
 
    std::cout << "Why did the chicken cross the road?" << std::endl;
    std::cout << "To get to the other side!" << std::endl;
    jokes[jokeIndex]++;
    std::cout << "---------------" << std::endl;
 
    while (keepTellingJokes)
    {
        std::cout << "Do you want to hear another joke?" << std::endl;
        std::cout << "Enter Y for yes or N for no: ";
        char userChoice;
        std::cin >> userChoice;
 
        if (userChoice == 'Y' || userChoice == 'y')
        {
            jokeIndex++;
            if (jokeIndex > 3)
            {
                jokeIndex = 0;
            }
            switch (jokeIndex)
            {
            case 0:
                std::cout << "Why don't scientists trust atoms?" << std::endl;
                std::cout << "Because they make up everything!" << std::endl;
                break;
            case 1:
                std::cout << "What did the grape say when it got stepped on?" << std::endl;
                std::cout << "Nothing, it just let out a little wine." << std::endl;
                break;
            case 2:
                std::cout << "Why did the tomato turn red?" << std::endl;
                std::cout << "Because it saw the salad dressing!" << std::endl;
                break;
            default:
                std::cout << "Why did the scarecrow win an award?" << std::endl;
                std::cout << "Because he was outstanding in his field!" << std::endl;
                break;
            }
 
            jokes[jokeIndex]++;
            std::cout << "---------------" << std::endl;
        }
        else
        {
            keepTellingJokes = false;
        }
    }
 
    std::cout << "Thanks for listening! Goodbye!" << std::endl;
 
    return 0;
}