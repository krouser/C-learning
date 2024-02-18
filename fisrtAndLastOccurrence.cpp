#include <iostream>
#include <string>
 
int main()
{
    std::string str = "This is a sentence.";
    std::string space = " ";
 
    size_t pos1 = str.find_first_not_of(space);
        if (pos1 != std::string::npos)
        {
          std::cout << "First non-space character is at position: " << pos1 << std::endl;
        }
        else
        {
            std::cout << "No non-space characters found." << std::endl;
        }
 
    size_t pos2 = str.find_last_not_of(space);
        if (pos2 != std::string::npos)
        {
            std::cout << "Last non-space character is at position: " << pos2 << std::endl;
        }
        else
        {
            std::cout << "No non-space characters found." << std::endl;
        }
 
    return 0;
}