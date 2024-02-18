#include <iostream>
#include <string>
 
int main()
{
    std::string my_str("anincrediblycomplicatecode");
    std::string string_to_find("code");
 
    std::cout << "We are looking for the string *" << string_to_find << "* within the string *" << my_str << "*" << std::endl;
    std::cout << "Is *" << string_to_find << "* part of *" << my_str << "*?" << std::endl;
 
    size_t substring_index_found = my_str.find(string_to_find);
        if (substring_index_found == std::string::npos)
            std::cout << "No, the substring was not found" << std::endl;
        else
            std::cout << "The substring *" << string_to_find << "* was found and starts at index " << substring_index_found << std::endl;
 
    return 0;
}