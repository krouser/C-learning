#include <iostream>
class BaseClass1
{
public:
    BaseClass1() { std::cout << "BaseClass1 constructor\n"; }
    ~BaseClass1() { std::cout << "BaseClass1 destructor\n"; }
};
 
class BaseClass2
{
public:
    BaseClass2() { std::cout << "BaseClass2 constructor\n"; }
    ~BaseClass2() { std::cout << "BaseClass2 destructor\n"; }
};
 
class DerivedClass : public BaseClass1, public BaseClass2
{
public:
    DerivedClass() { std::cout << "DerivedClass constructor\n"; }
    ~DerivedClass() { std::cout << "DerivedClass destructor\n"; }
};
 
int main()
{
    DerivedClass d;
    return 0;
}