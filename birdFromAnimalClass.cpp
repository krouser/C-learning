#include <iostream>
#include <string>
 
class Animal
{
protected:
    std::string name;
 
public:
    Animal(const std::string &animalName) : name(animalName) {}
 
    void makeSound() const
    {
        std::cout << "The " << name << " makes a sound." << std::endl;
    }
};
 
class Bird : public Animal
{
public:
    Bird(const std::string &birdName) : Animal(birdName) {}
 
    void fly() const
    {
        std::cout << "The " << name << " is flying." << std::endl;
    }
};
 
int main()
{
    Bird Parrot("Kakapo");
 
    Parrot.makeSound();
    Parrot.fly();
 
    return 0;
}