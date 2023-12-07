#include <iostream>
#include <array>

int main()
{
    std::array<int, 10> n = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 5 };

    std::cout << "Number of elements in the array are : " << n.size() << std::endl;

    return 0;
}