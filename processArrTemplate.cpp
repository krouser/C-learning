#include <iostream>
 
template<typename T, size_t size>
struct ArrayWrapper
{
    T arr[size];
};
 
template<typename T, size_t size>
void modifyArray(ArrayWrapper<T, size> arrayWrapper)
{
    for (auto& val : arrayWrapper.arr)
    {
        val = 1;
    }
 
    std::cout << "Inside the function, modified array: ";
    for (const auto& val : arrayWrapper.arr)
    {
        std::cout << val << ' ';
    }
    std::cout << std::endl;
}
 
int main()
{
    ArrayWrapper<int, 5> arrayWrapper = { {1, 2, 3, 4, 5} };
 
    std::cout << "Original array: ";
    for (const auto& val : arrayWrapper.arr)
    {
        std::cout << val << ' ';
    }
    std::cout << std::endl;
 
    modifyArray(arrayWrapper);
 
    std::cout << "Outside function, original array remains unchanged: ";
    for (const auto& val : arrayWrapper.arr)
    {
        std::cout << val << ' ';
    }
    std::cout << std::endl;
}