#include <iostream>
 
constexpr int getValue()
{
    return 42;
}

template <char C, int N>
void processValue(int* ptr)
{
    std::cout << "Char: " << C << ", Integer: " << N;
    std::cout << ", Pointer: " << *ptr << std::endl;
}
 
int main()
{
    int value = getValue();
    int* ptr = &value;
    processValue<'A', 10>(ptr);
    return 0;
}