#include <iostream>
#include <string>
 
class Animal 
{
public:
    std::string name;
    int age;
    std::string color;
 
    void sleep() 
    {
        std::cout << name << " is sleeping. Age: " << age << ", Color: " << color << std::endl;
    }
 
    void eat() 
    {
        std::cout << name << " is eating. Age: " << age << ", Color: " << color << std::endl;
    }
};
 
int main() 
{
    Animal elephant;
    elephant.name = "Eli the elephant";
    elephant.age = 10;
    elephant.color = "Gray";
 
    Animal giraffe;
    giraffe.name = "Gif the giraffe";
    giraffe.age = 5;
    giraffe.color = "Yellow";
 
    Animal rhino;
    rhino.name = "Riri the rhino";
    rhino.age = 8;
    rhino.color = "Gray";

    Animal parrot;
    parrot.name = "sparrow the parrot";
    parrot.age = 2;
    parrot.color = "Green";
 
    int choice;
    std::cout << "Choose an animal:" << std::endl;
    std::cout << "1. Elephant" << std::endl;
    std::cout << "2. Giraffe" << std::endl;
    std::cout << "3. Rhino" << std::endl;
    std::cout << "4. Parrot" << std::endl;    
    std::cout << "Enter your choice: ";
    std::cin >> choice;
 
    int action;
    std::cout << "What should the animal do?" << std::endl;
    std::cout << "1. Sleep" << std::endl;
    std::cout << "2. Eat" << std::endl;
    std::cout << "Enter your choice: ";
    std::cin >> action;
 
    switch (choice) 
    {
    case 1:
        switch (action) 
        {
        case 1:
            elephant.sleep();
            break;
        case 2:
            elephant.eat();
            break;
        default:
            std::cout << "Invalid choice." << std::endl;
        }
        break;
    case 2:
        switch (action) 
        {
        case 1:
            giraffe.sleep();
            break;
        case 2:
            giraffe.eat();
            break;
        default:
            std::cout << "Invalid choice." << std::endl;
        }
        break;
    case 3:
        switch (action) 
        {
        case 1:
            rhino.sleep();
            break;
        case 2:
            rhino.eat();
            break;
        default:
            std::cout << "Invalid choice." << std::endl;
        }
        break;
    case 4:
        switch (action) 
        {
        case 1:
            parrot.sleep();
            break;
        case 2:
            parrot.eat();
            break;
        default:
            std::cout << "Invalid choice." << std::endl;
        }
        break;
    default:
        std::cout << "Invalid choice." << std::endl;
    }
 
    return 0;
}