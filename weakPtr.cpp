#include <iostream>
#include <memory>
 
struct Object
{
    int value;
};
 
int main()
{
    std::shared_ptr<Object> sharedPtr = std::make_shared<Object>();
    sharedPtr->value = 42;
 
    std::weak_ptr<Object> weakPtr = sharedPtr;
    if (auto lockedPtr = weakPtr.lock())
    {
        std::cout << "Value: " << lockedPtr->value << std::endl;
    }
    else
    {
        std::cout << "Object is no longer valid." << std::endl;
    }
 
    sharedPtr.reset();
 
    if (auto lockedPtr = weakPtr.lock())
    {
        std::cout << "Value: " << lockedPtr->value << std::endl;
    }
    else
    {
        std::cout << "Object is no longer valid." << std::endl;
    }
 
    return 0;
}