#include <iostream>
#include <string>
 
class Animal 
{
public:
    std::string name;
 
    void sleep() 
    {
        std::cout << "The " << name << " is sleeping." << std::endl;
    }
 
    void eat() 
    {
        std::cout << "The " << name << " is eating." << std::endl;
    }
};
 
int main() 
{
    Animal elephant;
    elephant.name = "Elephant";
 
    std::cout << "Elephant's actions:" << std::endl;
    elephant.sleep();
    elephant.eat();
 
    return 0;
}