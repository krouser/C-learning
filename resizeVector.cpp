#include <iostream>
#include <vector>
 
int main() 
{
    std::vector<int> v = { 1, 2, 3, 4, 5 };
 
    std::cout << "Before we resize, the vector contains:";
    for (const auto& element : v) 
    {
        std::cout << " " << element;
    }
    std::cout << std::endl << "Current size: " << v.size() << std::endl;
 
    std::cout << "Resizing the vector to a smaller size using a single argument..." << std::endl;
    v.resize(3);
 

    std::cout << "After resizing, the vector contains:";
    for (const auto& element : v) 
    {
        std::cout << " " << element;
    }
    std::cout << std::endl << "New size: " << v.size() << std::endl;


 
    std::cout << "Resizing the vector to a larger size using two arguments..." << std::endl;
    v.resize(5, 10);

    
 
    std::cout << "After resizing, the vector contains:";
    for (const auto& element : v) 
    {
        std::cout << " " << element;
    }
    std::cout << std::endl << "New size: " << v.size() << std::endl;
 
    std::cout << "Resizing the vector to a larger size using a single argument again..." << std::endl;
    v.resize(8);

    for (const auto& element : v) 
    {
        std::cout << " " << element;
    }
    std::cout << std::endl << "New size: " << v.size() << std::endl;
 
    std::cout << "Resizing the vector to a larger size using a single argument again..." << std::endl;
    v.resize(8, 11);

 
    std::cout << "After resizing, the vector contains:";
    for (const auto& element : v) 
    {
        std::cout << " " << element;
    }
    std::cout << std::endl << "New size: " << v.size() << std::endl;
 
    return 0;
}