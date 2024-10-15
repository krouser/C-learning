#include <iostream>
 
class Animal
{
public:
    std::string name;
    int age;
    std::string color;
    static int count;
 
    Animal( )
    {
        count++;
    }
};
 
int Animal::count = 0;
 
int main()
{
    Animal lion;
    lion.name = "Leo the lion";
    lion.age = 10;
    lion.color = "Golden";

    Animal tiger2;
    tiger2.name = "Tony the tiger2";
    tiger2.age = 72;
    tiger2.color = "Orange2";

    Animal tiger;
    tiger.name = "Tony the tiger1";
    tiger.age = 7;
    tiger.color = "Orange";

    std::cout << "Number of animals: " << Animal::count << std::endl; // 
 
    std::cout << "Name of the lion: " << lion.name << ", Age: " << lion.age << ", Color: " << lion.color << std::endl;
    std::cout << "Name of the tiger: " << tiger.name << ", Age: " << tiger.age << ", Color: " << tiger.color << std::endl;
    std::cout << "Name of the tiger2: " << tiger2.name << ", Age: " << tiger2.age << ", Color: " << tiger2.color << std::endl;
    return 0;
}

