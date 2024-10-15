#include <iostream>
#include <string>
 
class Animal
{
public:
    std::string name;
    int age;
    std::string color;
 
    Animal(const std::string& animalName, int animalAge, const std::string& animalColor)
        : name(animalName), age(animalAge), color(animalColor)
    {
    }
 
    Animal(const Animal& other)
        : name(other.name), age(other.age), color(other.color)
    {
    }
 
    void displayInfo()
    {
        std::cout << "Name: " << name << ", Age: " << age << ", Color: " << color << std::endl;
    }
};
 
int main()
{
    Animal lion("Leo the lion", 5, "Golden");
 
    Animal copiedLion{lion};
 
    std::cout << "Original Lion: ";
    lion.displayInfo();
 
    std::cout << "Copied Lion: ";
    copiedLion.displayInfo();
 
    return 0;
}
 