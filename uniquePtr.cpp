#include <iostream>
#include <memory>
 
void processObject(std::unique_ptr<int>& ptr)
{
    std::cout << "Processing object: " << *ptr << std::endl;
    *ptr += 10;
}
 
int main()
{
    std::unique_ptr<int> ptr1 = std::make_unique<int>(5);
 
    std::cout << "Initial value: " << *ptr1 << std::endl;
 
    processObject(ptr1);
 
    std::cout << "Processed value: " << *ptr1 << std::endl;
 
    std::unique_ptr<int> ptr2 = std::move(ptr1);
 
        if (!ptr1)
    {
        std::cout << "Original unique_ptr is empty." << std::endl;
    }
 
    if (ptr2)
    {
        std::cout << "Transferred unique_ptr value: " << *ptr2 << std::endl;
    }
 
    ptr2.reset();
 
    if (!ptr2)
    {
        std::cout << "Transferred unique_ptr is empty." << std::endl;
    }
 
    return 0;
}
 