#include <iostream>  
 
int* createIntArray(int size)
{
    int* array = new int[size];
    for (size_t i = 0; i < size; i++)
    {
        array[i] = i;
    }
    return array;
}
int main()
{
    int* myArray = createIntArray(10);
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << "Element " << i << " = " << myArray[i] << std::endl;
    }      delete[] myArray;
}