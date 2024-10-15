 
#include <iostream>
#include <string>
 
class Animal
{
public:
    std::string name;
 
    Animal(const std::string &animalName)
    {
        name = animalName;
        std::cout << "Creating " << name << std::endl;
    }
 
    ~Animal()
    {
        std::cout << "Destroying " << name << std::endl;
    }
};
 
int main()
{
    Animal Lili("Lili the chimpanzee");
 
    return 0;
}