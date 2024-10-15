#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <random>
#include <algorithm>

int main()
{
    std::vector<int> cards{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
 
    std::cout << "Let's play some cards!" << std::endl;
    std::cout << "______________________" << std::endl;
 
    std::cout << "Our deck of cards contains the following cards:" << std::endl;
    for (auto x : cards) 
    {
        std::cout << x << ' ';
    }
    std::cout << std::endl;
    std::cout << "______________________________________________" << std::endl;
 
    std::reverse(cards.begin(), cards.end());
    std::cout << "Reversing our deck of cards. The order is now:" << std::endl;
    for (int x : cards) 
    {
        std::cout << x << " "; 
    }
    std::cout << std::endl;
    std::cout << "______________________________________________" << std::endl;
 
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(cards.begin(), cards.end(), g);
    std::cout << "Shuffling our deck of cards. The order is now:" << std::endl;
    for (int x : cards) 
    {
        std::cout << x << " "; 
    }
    std::cout << std::endl;
    std::cout << "______________________________________________" << std::endl;
 
    std::rotate(cards.begin(), cards.begin() + 3, cards.end());
    std::cout << "Rotating our deck of cards. The order is now:" << std::endl;
    for (int x : cards) 
    {
        std::cout << x << " "; 
    }
    std::cout << std::endl;
 
    return 0;
}