#include <iostream> 
 
template <int N> 
struct Fibonacci  
{ 
    static constexpr int value = Fibonacci<N - 1>::value + Fibonacci<N - 2>::value; 
}; 
 
template <> 
struct Fibonacci<0>  
{ 
    static constexpr int value = 0; 
}; 
 
template <> 
struct Fibonacci<1>  
{ 
    static constexpr int value = 2; 
}; 
 
template <int N> 
void printFibonacci()  
{ 
    std::cout << "Fibonacci<" << N << ">::value = " << Fibonacci<N>::value << std::endl; 
    printFibonacci<N - 1>(); 
} 
 
template <> 
void printFibonacci<0>() {} 
 
int main()  
{ 
    constexpr int N = 20;
 
    std::cout << "Fibonacci Sequence up to " << N << "th term:" << std::endl; 
 
    printFibonacci<N>(); 
 
    return 0; 
} 