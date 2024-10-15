#include <iostream>
#include <vector>
#include <sstream>

// In case we want to use a class of function declaration using the template, we should use the following statement:

template <typename T, size_t N>
class MyArray
{
 
public:
// The class has a constructor that initializes all of the elements in the array to 0
    MyArray()
    {
        for (size_t i = 0; i < N; i++) 
        {
            m_elements[i] = 0;
        }
    }

// The class has an operator[] that allows you to access the elements in the array.
    T& operator[](size_t index)
    {
        return m_elements[index];
    }
 
private:
    T m_elements[N];
};
 
template <typename T, size_t N>
// The function MyFunction() takes a reference to an object of type MyArray<T, N> as its argument.
void MyFunction(MyArray<T, N>& array)
{
    for (size_t i = 0; i < N; i++) 
    {
        std::cout << array[i] << std::endl;
    }
}