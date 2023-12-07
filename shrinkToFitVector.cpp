#include <iostream>
#include <vector>
 
int main() 
{
    std::vector<int> vec{ 1, 2, 3, 4, 5 };
 
    vec.resize(3);
 
    std::cout << "Before shrink: Size = " << vec.size() << ", Capacity = " << vec.capacity() << std::endl;
 
    vec.shrink_to_fit();
 
    std::cout << "After shrink: Size = " << vec.size() << ", Capacity = " << vec.capacity() << std::endl;
 
    return 0;
}