#include <iostream> 
int main()
{    
    int age{};
    int older_age{};
    std::cout << "Please enter your age:" << std::endl;
    std::cin >> age;
    older_age = age;
    older_age += 1;
    std::cout << "You are " << age << " years old" << std::endl;
    std::cout << "Next year you will be " << older_age << " years old" << std::endl;
}