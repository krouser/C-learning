#include <iostream>
#include <optional>
#include <functional>
 
std::optional<std::reference_wrapper<int>> addValueByReference(int &value, int increment)
{
    value += increment;
    return std::optional<std::reference_wrapper<int>>(value);
}
 
int *addValueByPointer(int *value, int increment)
{
    *value += increment;
    return value;
}
 
int main()
{
    int varb = 42;
 
    std::optional<std::reference_wrapper<int>> refResult = addValueByReference(varb, 10);
    if (refResult)
    {
        std::cout << "Value after modifying through reference: " << refResult.value() << std::endl;
    }
    else
    {
        std::cout << "Reference result is empty." << std::endl;
    }
 
    int* ptrResult = addValueByPointer(&varb, 20);
    if (ptrResult)
    {
        std::cout << "Value after modifying through pointer: " << *ptrResult << std::endl;
    }
    else
    {
        std::cout << "Pointer result is null." << std::endl;
    }
 
    return 0;
}
 