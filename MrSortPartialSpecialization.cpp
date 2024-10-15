#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
 
template<typename T>
struct SortData
{
    static void Sort(std::vector<T>& data)
    {
        std::sort(data.begin(), data.end());
    }
};
 
template<typename T>
struct SortData<T*>
{
    static void Sort(std::vector<T*>& data)
    {

        for (size_t i = 0; i < data.size() - 1; ++i)
        {
            for (size_t j = 0; j < data.size() - i - 1; ++j)
            {
                if (*data[j] > *data[j + 1])
                {
                    T* temp = data[j];
                    data[j] = data[j + 1];
                    data[j + 1] = temp;
                }
            }
        }
    }
};
 
int main()
{
    std::cout << "Welcome to Mr Sort. I sort things. Enter some numbers:" << std::endl;
 
    std::vector<int> numbers;
    int num;
 

    std::string input;
    std::getline(std::cin, input);
    std::stringstream ss(input);
    while (ss >> num)
    {
        numbers.push_back(num);
    }

    SortData<int>::Sort(numbers);

    std::cout << "Sorted numbers: ";
    for (const auto& num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Sorting pointers: ";
    std::vector<int*> pointers;
    for (const auto& num : numbers)
    {
        pointers.push_back(new int(num));
    }
 
    SortData<int*>::Sort(pointers);

    std::cout << "Sorted pointers: ";
    for (const auto& ptr : pointers)
    {
        std::cout << *ptr << " ";
        delete ptr;
    }
    std::cout << std::endl;
 
    return 0;
}