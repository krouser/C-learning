#include <fstream>
#include <string>
#include <iostream>
#include <format>
 
const std::string MY_FILE_NAME = "Learning CPP example.txt";
 
int main()
{
    std::ofstream myfile;
    myfile.open(MY_FILE_NAME);
    if (!myfile)
    {
        std::cerr << "Error: Failed to open file " << MY_FILE_NAME << std::endl;
        return 1;
    }
 
    myfile << "Writing this to a file.\n";
    myfile.close();
 
    std::ifstream in(MY_FILE_NAME, std::ifstream::ate | std::ifstream::binary);
    if (!in)
    {
        std::cerr << "Error: Failed to open file " << MY_FILE_NAME << std::endl;
        return 1;
    }
 
    auto myFileSize = in.tellg();
    std::string output = std::format("File {} is {} bytes", MY_FILE_NAME, (int)myFileSize);
    std::cout << output.c_str() << std::endl;
 
    return 0;
}