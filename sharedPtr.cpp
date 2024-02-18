#include <iostream>
#include <memory>
 
void printData(const std::shared_ptr<int>& ptr)
{
    std::cout << "Data: " << *ptr << std::endl;
}
 
std::shared_ptr<int> createData(int value)
{
    return std::make_shared<int>(value);
}
 
int main()
{
    std::shared_ptr<int> ptr1 = createData(10);
    std::shared_ptr<int> ptr2 = ptr1;
 
    printData(ptr1);
    printData(ptr2);
 
    {
        std::shared_ptr<int> ptr3 = createData(20);
        printData(ptr3);
    }
 
    printData(ptr1);
    printData(ptr2);
 
    return 0;
}