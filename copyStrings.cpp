#include <iostream>
#include <string>
 
int main()
{
    std::string User_Name{ "default" }, New_User_Name{};
 
    std::cout << "Please enter a new user name" << std::endl;
    std::cin >> New_User_Name;
    User_Name = New_User_Name;
    std::cout << "your new user name is " << User_Name << std::endl;
 
    return 0;
 
}