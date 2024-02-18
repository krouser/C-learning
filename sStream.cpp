#include <sstream>
#include <iostream>
 
int main()
{
    std::string input = "10 20 30 40 50";
    std::stringstream stream(input);
 
    int n;
    while (stream >> n)
    {
        std::cout << n << std::endl;
    }
 
    return 0;
}