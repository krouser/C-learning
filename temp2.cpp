#include <iostream>
int main()
{
    bool Wind{ false }; 
    bool Cold{ false }; 
    bool Running{ false };
    Wind = false;
    Cold = false;
    Running = !(Wind && Cold);
    std::cout << "Today I am " << ((Running) ? "" : " not ") << "going to run" << std::endl;
}
 