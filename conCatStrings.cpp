#include <iostream>
#include <string>
 
int main()
{
    std::string one_word;
    std::string one{ "Ray" }, two{ "Of" }, three{ "Sunshine" };
    one_word = one + two + three;
 
    std::cout << one_word << std::endl;
}