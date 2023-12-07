#include <iostream>
#include <vector>
 
int main()
{
    std::cout << "Knock, knock." << std::endl;
    std::cout << "Who's there?" << std::endl;
 
    std::vector<char> word = { 'B', 'e', 'e', 't', 's' };
    std::vector<char> response = { 'B', 'e', 'e', 't', 's', ' ', 'w', 'h', 'o', '?', ' ', 'B', 'e', 'e', 't', 's', ' ', 'm', 'e', '!' };
 
    for (auto it = word.begin(); it != word.end(); it++)
    {
        std::cout << *it;
    }
    std::cout << std::endl;
 
    std::cout << "Beets who?" << std::endl;
 
    for (auto it = response.begin(); it != response.end(); it++)
    {
        std::cout << *it;
    }
    std::cout << std::endl;
 
    return 0;
}
 