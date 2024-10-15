#include <iostream>
 
class Bicycle
{
public:
    std::string name;
    int age;
    std::string wheels;
    std::string color;
    std::string brand;
    std::string type;
    static int count;
 
    Bicycle( )
    {
        count++;
    }
};

int Bicycle::count = 0;

int main ()
{
    Bicycle bike1;
    bike1.name = "Bike1";
    bike1.age = 1;
    bike1.wheels = "Two";
    bike1.color = "Red";
    bike1.brand = "Brand1";
    bike1.type = "Electric";

    Bicycle bike2;  
    bike2.name = "Bike2";
    bike2.age = 2;
    bike2.wheels = "Two";
    bike2.color = "Blue";
    bike2.brand = "Brand2";
    bike2.type = "Electric";

    Bicycle bike3;
    bike3.name = "Bike3";
    bike3.age = 3;
    bike3.wheels = "Two";
    bike3.color = "Green";
    bike3.brand = "Brand3";
    bike3.type = "Non Electric";

    std::cout << "Number of Bicycle: " << Bicycle::count << std::endl; 
 
    std::cout << "Name of the Bike1: " << bike1.name << ", Age: " << bike1.age << ", Color: " << bike1.color << ", Brand: " << bike1.brand << ", Wheels: " << bike1.wheels << ", Type: " << bike1.type << std::endl;
    std::cout << "Name of the Bike2: " << bike2.name << ", Age: " << bike2.age << ", Color: " << bike2.color << ", Brand: " << bike2.brand << ", Wheels: " << bike2.wheels << ", Type: " << bike2.type << std::endl;
    std::cout << "Name of the Bike3: " << bike3.name << ", Age: " << bike3.age << ", Color: " << bike3.color << ", Brand: " << bike3.brand << ", Wheels: " << bike3.wheels << ", Type: " << bike3.type << std::endl;

    return 0;
}
