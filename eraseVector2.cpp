#include <iostream>
#include <vector>
 
int main()
{
    std::vector<int>my_vector{ 6,70,13,3 };
    std::cout << "Before using erase() the first element is: " << 
    my_vector[0] << std::endl;
    if (my_vector.size() > 0)
    {
        my_vector.erase(my_vector.begin() + 2);
    }
    std::cout << "After using erase() the first element is: " << my_vector[0];
    return 0;
}