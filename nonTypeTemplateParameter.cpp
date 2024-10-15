#include <iostream> 
 
template <typename T, std::size_t Size> 
class FixedSizeArray  
{ 
    private: 
    T elements[Size]; 
 
    public: 

    FixedSizeArray()  
    { 
        for (std::size_t i = 0; i < Size; ++i)  
        { 
            elements[i] = T(); 
        } 
    } 
 

    T& operator[](std::size_t index) 
    { 
        return elements[index]; 
    } 
 

    std::size_t GetSize() const  
    { 
        return Size; 
    } 
}; 
 
int main()  
{ 

    FixedSizeArray<int, 5> numbersArray; 
 

    for (std::size_t i = 0; i < numbersArray.GetSize(); ++i) { 
        numbersArray[i] = i + 1; 
        std::cout << numbersArray[i] << " "; 
    } 
    std::cout << std::endl; 
 

    FixedSizeArray<char, 3> charactersArray; 
 

    for (std::size_t i = 0; i < charactersArray.GetSize(); ++i)  
    { 
        charactersArray[i] = 'A' + i; 
        std::cout << charactersArray[i] << " "; 
    } 
    std::cout << std::endl; 
 
    return 0; 
} 