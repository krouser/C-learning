#include <iostream>
#include <set>
 
int main()
{
    std::set<int, std::greater<int>> s;
    s.insert(-3);
    s.insert(3);
    s.insert(13);
    s.insert(33);
    s.insert(-33);
    s.insert(-33);
 
    auto last_elem = *s.rbegin();
 
    for (auto it = s.begin(); it != s.end(); ++it)
    {
        std::cout << *it;
        if (*it != last_elem)
        { 
            std::cout << ' ';
        }
    }
    std::cout << std::endl;
    return 0;
}