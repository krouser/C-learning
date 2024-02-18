#include <iostream>
 
#include <iostream>
int main(int argc, char* argv[])
{
    std::cout << "The program was called with " << argc-1 << " arguments." << std::endl;
    for (int i = 1; i < argc; i++)
    {
        std::cout << "arg[" << i << "]: " << argv[i] << std::endl;
    }
    std::cout << std::endl;
    return 0;
}