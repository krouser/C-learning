#include <iostream>
#include <list>

int main() 
{
    std::list<int> myList;
 
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
 
    myList.push_front(5);
    myList.push_front(2);
 
    auto it = std::find(myList.begin(), myList.end(), 5);
    if (it != myList.end()) 
    {
        myList.insert(++it, 7);
    }
 
    myList.remove(20);
    std::cout << "Before reverse:" << std::endl;
 
    for (const auto& element : myList)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;
    myList.reverse();
    std::cout << "After reverse:" << std::endl;
 
    for (const auto &element : myList)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;
 
    return 0;
}