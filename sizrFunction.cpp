#include <iostream>
#include <vector>
 
int main()
{
    std::vector<int>my_vector{ 6,70,13,3 };
    std::cout << my_vector [0] << std::endl;
    std::cout << my_vector [1] << std::endl;
    std::cout << my_vector [2] << std::endl;
    std::cout << my_vector [3] << std::endl;

    std::cout << "What is my_vector size before clear ? " << (my_vector.size())  << std::endl;
 
    my_vector.clear();
    
    std::cout << "After ‘clear’ my_vector size is " << (my_vector.size()) << std::endl;
 
    return 0;
}