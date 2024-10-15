#include <iostream>
#include <string>
 
class Animal
{
public:
    std::string name;
    int age;
 
    Animal()
    {
        name = "Project Unnamed";
        age = 0;
    }
 
    Animal(const std::string &animalName, int animalAge)
    {
        name = animalName;
        age = animalAge;
    }
 
    void displayInfo()
    {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};
 
int main()
{
    Animal lion1;
    lion1.displayInfo(); 
 
    Animal lion2("Simba", 3);
    lion2.displayInfo();
 
    return 0;
}