#include <iostream>
 
void FuncA();
void FuncB();
void FuncC();
 
int main()
{
    std::cout << ("The main function says hi!") << std::endl;
    FuncA();
}
 
void FuncA()
{
    std::cout << ("This is Function A calling to say hi!") << std::endl;
    FuncB();
}
 
void FuncB()
{
    std::cout << ("This is Function B calling to say hi!") << std::endl;
    FuncC();
}
 
void FuncC()
{
    std::cout << ("This is Function C calling to say hi!") << std::endl;;
}