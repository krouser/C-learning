#include <iostream>
#include <array>

void arrayDecay(int *arr)
{
    std::cout << "Modified size of array is by passing by value: ";
    std::cout << sizeof(arr) << std::endl;
}
 
void pointerDecay(int(*ptr)[7])
{
    std::cout << "Modified size of array by passing by pointer: ";
    std::cout << sizeof(ptr) << std::endl;
}
 
int main()
{
    int numbers[7] = { 8, 7, 3, 1, 10, 16, 2 };
 
    std::cout << "Actual size of array is: ";
    std::cout << sizeof(numbers) << std::endl;
 
    arrayDecay(numbers);
 
    pointerDecay(&numbers);
 
    return 0;
}