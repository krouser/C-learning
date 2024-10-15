#include <iostream>
class MyFunctor
{
public:
    void operator()(int number)
    {

        std::cout << "Hello, " << number << "!" << std::endl;
    }
};
 
int main()
{
    MyFunctor myFunctor;
 
    myFunctor(42);
 
    return 0;
}