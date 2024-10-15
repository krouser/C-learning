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
    int i =1;
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << "Element " << i << " = " << myArray[i] << std::endl;
    }      return myArray[i];


int* FactArray1 = myArray;    
{
    for (int i = 1; i = 10; i++)
    {
        if (i == 1)
        std::cout << i <<   "is an odd number" << std::endl;       
    }
    return 1;
}

int* FactArray = createIntArray(10);    
{
    for (int i = 1; i = 10; i++)
    {
        if (i == 1)
        std::cout << i <<   "is an odd number" << std::endl;       
    }
    return FactArray1[i] *  FactArray1[i] - 1;
}

}