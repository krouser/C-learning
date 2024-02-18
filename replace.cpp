#include <iostream>
#include <string>
 
int main()
{
    std::cout << "Please tell me something about yourself starting with 'I am'" << std::endl;
 
    std::string line;
    while (std::getline(std::cin, line))
    {
        std::string what_to_search{ "I am " };
        std::string what_to_replace("You are ");
        size_t f = line.find(what_to_search);
        if (f != std::string::npos)
        {
            line.replace(f, what_to_search.length(), what_to_replace);
        }
 
        std::cout << "You said " << line << std::endl;
    }
 
    return 0;
}