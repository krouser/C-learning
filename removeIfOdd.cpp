#include <iostream>
#include <algorithm>
#include <vector>
 
bool Is_Odd(int a)
{
    return (a % 2 == 1);
}
 
int main()
{
 
    std::vector<int> vec = { 11, 24, 13, 64, 23, 36, 17, 31, 100 };
    auto it = remove_if(vec.begin(), vec.end(), Is_Odd);
 
    for (auto i = vec.begin(); i != it; i++)
    {
        std::cout << *i << std::endl;
    }
 
    return 0;
}