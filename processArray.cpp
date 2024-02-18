#include <iostream>
 
//
void ProcessArray(int arr[], int size)
{
    std::cout << "Processing array: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
 
int main()
{
    //
    int myArray[] = { 1, 2, 3, 4, 5 };
 
    //
    int size = sizeof(myArray) / sizeof(myArray[0]);
 
    //
    ProcessArray(myArray, size);
 
    return 0;
}