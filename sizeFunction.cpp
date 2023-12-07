#include <iostream>
#include <vector>
 
int main()
{
    std::vector<int>my_vector{ 6,70,13,3 };
    std::cout << my_vector[0] << std::endl;
    std::cout << my_vector[1] << std::endl;
    std::cout << my_vector[2] << std::endl;
    std::cout << my_vector[3] << std::endl;

    std::cout << "Before using clear() - Is my vector empty? " <<             ((my_vector.empty()) ? "true" :
            "false") << std::endl;
 
    my_vector.clear();
 
    std::cout << "After using clear() - Is my vector empty? " <<             ((my_vector.empty()) ? "true" :
            "false") << std::endl;
 
    return 0;
}