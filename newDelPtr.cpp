#include <iostream>
 
int main() 
{
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
 
    int *arr = new int[size];
 
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * (i + 1);
    }
 
    std::cout << "Array: ";
    for (int i = 0; i < size; i++) 
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
 
    int sum = 0;
    for (int i = 0; i < size; i++) 
    {
        sum += arr[i];
    }
 
    std::cout << "Sum: " << sum << std::endl;
 
    delete[] arr;
 
    return 0;
}