#include <iostream>
#include <functional>
 
void PerformOperation(int value, std::function<void(int)> operation)
{
    std::cout << "Performing operation on value: " << value << std::endl;
    operation(value);
}
 
void MultiplyByTwo(int value)
{
    std::cout << value << " multiplied by 2 is: " << (value * 2) << std::endl;
}
 
int main()
{
    int number = 5;
 
    PerformOperation(number, MultiplyByTwo);
 
    return 0;
}
 