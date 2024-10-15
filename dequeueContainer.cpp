#include <iostream>
#include <deque>
 
int show_deque(std::deque<int> dq)
{
    for (auto it = dq.begin(); it != dq.end(); ++it)
    {
        std::cout << *it;
        if (it != dq.end() - 1)
        { 
            std::cout << ", ";
        }
    }
    std::cout << std::endl;
    return 0;
}
 
int main()
{
    std::deque<int> num{ 10, 20, 30, 40, 50 };
 
    std::cout << "Our deque contains the following elements: ";
    show_deque(num);
 
 
    num.pop_back();
 
    std::cout << "After pop_back() our deque contains the following elements: ";
    show_deque(num);
 
    num.pop_front();
 
 
    std::cout << "After pop_back() our deque contains the following elements: ";
    show_deque(num);
}