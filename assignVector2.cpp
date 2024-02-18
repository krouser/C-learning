#include <iostream>
#include <vector>
 
int main()
{
    std::vector<int> vec(5);
 
    std::cout << "Initial values of the vector: ";
    for (size_t i = 0; i < vec.size(); ++i)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
 
    vec.assign({ 1, 2, 3, 4, 5 });
 
    std::cout << "New values of the vector: ";
    for (size_t i = 0; i < vec.size(); ++i)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
 
    vec.resize(3);
 
    std::cout << "Resized vector (size 3): ";
    for (size_t i = 0; i < vec.size(); ++i)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
 
    vec.assign({ 6, 7, 8 });
 
    std::cout << "New values of the vector: ";
    for (size_t i = 0; i < vec.size(); ++i)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
 
    return 0;
}