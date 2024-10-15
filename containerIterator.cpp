#include <iostream>
#include <vector>
 
int main()
{
    std::vector<int> v = { 1, 2, 3, 4, 5, 6 };
    std::vector<int>::iterator i;
    int j;
    std::cout << "Accesing elements Without an iterators " << std::endl;
    for (j = 0; j < 3; ++j)
    {
        std::cout << v[j] << " ";
    }
    std::cout << "Accesing elements with iterators ";
 
    for (i = v.begin(); i != v.end(); ++i)
    {
        std::cout << *i << " ";
    }
}