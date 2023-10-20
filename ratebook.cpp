#include <iostream> 
int main()
{
    int rate;
    std::cout << "How would you rate this book so far? Please rate from 1-10" << std::endl;
    std::cin >> rate;
    std::cout << "You rated this book as " << rate << ", thanks for your feedback!" << std::endl;
}