#include <forward_list>
#include <iostream>
 
int main()
{
    std::forward_list<int> fl1;
    std::forward_list<int> fl2;
    std::forward_list<int> fl3;
 
    fl1.assign({ 5, 6, 7 });
    fl2.assign({ 10, 20, 30 });
    fl3.assign(fl2.begin(), fl2.end());
 
    std::cout << "The elements of our first forward list are: ";
    for (int& a : fl1)
    {
        std::cout << a << " ";
    }
    std::cout << std::endl;
 
    std::cout << "The elements of our second forward list are: ";
    for (int& b : fl2)
    {
        std::cout << b << " ";
    }
    std::cout << std::endl;
 
    std::cout << "The elements of our third forward list are : ";
    for (int& c : fl3)
    {
        std::cout << c << " ";
    }
    std::cout << std::endl;
 
    return 0;
}