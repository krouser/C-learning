#include<unordered_set>
#include<iostream>
 
int main()
{
 
    std::unordered_set<int> my_set = { 5, 78, 8, 23, 15, 22 };
 
    int value = 8;
 
    if (my_set.find(value) != my_set.end())
    {
        std::cout << value << " was found in the set" << std::endl;
    }
    else
    {
        std::cout << value << " was not found in the set" << std::endl;
    }
 
    value = 50;
 
    if (my_set.find(value) != my_set.end())
    {
        std::cout << value << " was found in the set" << std::endl;
    }
    else
    {
        std::cout << value << " was not found in the set" << std::endl;
    }
 
}