#include <iostream>
#include <string>
 
int main()
{
#ifdef _WIN32
    char path_separator = '\\';
    std::string full_path{ "c:\\my drive\\my folder\\myfile.txt" };
#else
    char path_separator = '/';
    std::string full_path{ "/my drive/my folder/myfile.txt" };
#endif
 
    ///UNDERSTAND THIS CODE HERE

    std::string base_filename = full_path.substr(full_path.rfind(path_separator) + 1);
    
    
    std::cout << "The file name extracted from full path (" << full_path << ") is " << base_filename << std::endl;
 return 0;
}