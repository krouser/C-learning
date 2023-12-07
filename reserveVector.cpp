#include <iostream>
#include <vector>
 
int main() 
{
    std::vector<int> v;
 
    std::cout << "Reserving space for 10 elements..." << std::endl;
    v.reserve(10);
 
    std::cout << "Adding 5 elements to the vector..." << std::endl;
    for (int i = 0; i < 5; i++) 
    {
        v.push_back(i);
    }
 
    std::cout << "Size: " << v.size() << std::endl; 
 
    std::cout << "Adding 5 more elements to the vector..." << std::endl;
    for (int i = 5; i < 10; i++) 
    {
        v.push_back(i);
    }
 
    std::cout << "Size: " << v.size() << std::endl;
 

 
    std::cout << "Adding 6 more elements to the vector..." << std::endl;
    for (int i = 5; i < 11; i++) 
    {
        v.push_back(i);
    }
 
    std::cout << "Size: " << v.size() << std::endl;


    return 0;
}