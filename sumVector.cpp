#include <iostream>
#include <vector>

int main()
{
    std::vector<int>myvector{1,2,3,4,5};
    int sum (0);
    for (int i = 0; i < 5; i++) 
    {
        sum += myvector[i];
    }
 
    std::cout << "Sum: " << sum << std::endl;
}