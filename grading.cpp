#include <iostream>
int main() 
{
    int grade;
    std::cout << "Enter your grade: ";
    std::cin >> grade;
    if (grade < 60){
        std::cout << "You have failed the course." << std::endl;
    }
    else{
        std::cout << "Congratulations! You have passed the couse." << std::endl;
    }
    return 0;
}