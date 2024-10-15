#include <iostream>
 
class A
{
public:
    virtual void doSomething()
    {
        std::cout << "Doing something in Class A" << std::endl;
    }
};
 
class B : virtual public A
{
public:
    void doSomething() override
    {
        std::cout << "Doing something in Class B" << std::endl;
    }
};
 
class C : virtual public A
{
public:
    void doSomething() override
    {
        std::cout << "Doing something in Class C" << std::endl;
    }
};
 
class D : public B, public C
{
public:
    void doSomething() override
    {

        A::doSomething();
    }
};
 
int main()
{
    D object;
 
    object.doSomething(); 
    return 0;
}