#include <iostream>
#include <vector>
 
int main()
{
    std::vector<int> vec = { 11, 12, 13 };
 
    std::cout << "Initial vector: ";
    for (auto i : vec)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
 
    vec.push_back(14);
    vec.push_back(15);
    vec.push_back(16);
    vec.push_back(17);
    vec.push_back(18);
    vec.push_back(19);
    vec.push_back(20);
    vec.push_back(21);
    vec.push_back(23);
 
    std::cout << "After push_back(14), push_back(15), push_back(16) and through push_back(23) : ";
    for (auto i : vec)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
 
    return 0;
}