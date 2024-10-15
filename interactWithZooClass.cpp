#include <iostream>
#include <string>
 
class Animal 
{
    friend class Veterinary;
 
private:
    std::string name;
    int age;
    std::string color;
    bool isVaccinated; 
 
public:
    Animal(const std::string& animalName, int animalAge, const std::string& animalColor)
        : name(animalName), age(animalAge), color(animalColor), isVaccinated(false) {}
 
    void displayInfo() 
    {
        std::cout << "Name: " << name << ", Age: " << age << ", Color: " << color
            << ", Vaccinated: " << (isVaccinated ? "Yes" : "No") << std::endl;
    }
};
 
class Veterinary 
{
public:
    void examineAnimal(Animal& animal) 
    {

        std::cout << "Performing medical examination on " << animal.name << std::endl;
        std::cout << "Age: " << animal.age << std::endl;
        std::cout << "Color: " << animal.color << std::endl;
 
        animal.isVaccinated = true;
        std::cout << "Animal is now vaccinated!" << std::endl;
    }
};
 
int main() 
{
    Animal lion("Simba", 5, "Golden");
    lion.displayInfo();
 
    Veterinary vet;
    vet.examineAnimal(lion);
 
    lion.displayInfo();
 
    return 0;
}
 