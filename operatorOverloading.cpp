#include <iostream>
 
class Vehicle 
{
public:
    virtual void displayInfo() const = 0;
    virtual ~Vehicle() {}
};
 
class Car : public Vehicle 
{
private:
    std::string brand;
    int year;
 
public:
    Car(const std::string& b, int y) : brand(b), year(y) {}
 
    void displayInfo() const override 
    {
        std::cout << "Car: " << brand << ", Year: " << year << std::endl;
    }
 
    bool operator>(const Car& other) const
    {
        return year > other.year;
    }
};
 
class Motorcycle : public Vehicle 
{
private:
    std::string brand;
    bool hasSidecar;
 
public:
    Motorcycle(const std::string& b, bool sidecar) : brand(b), hasSidecar(sidecar) {}
 
    void displayInfo() const override 
    {
        std::cout << "Motorcycle: " << brand;
        if (hasSidecar) 
        {
            std::cout << " (with Sidecar)";
        }
        std::cout << std::endl;
    }
 
    Motorcycle operator+(const Motorcycle& other) const
    {
        std::string combinedBrand = brand + " " + other.brand;
        bool hasCombinedSidecar = hasSidecar || other.hasSidecar;
        return Motorcycle(combinedBrand, hasCombinedSidecar);
    }
};
 
int main() 
{
    Car car1("Toyota", 2010);
    Car car2("Honda", 2015);
    Car car3("Ford", 2005);
 
    if (car2 > car1)
    { 
        std::cout << "Car 2 is newer than Car 1" << std::endl;
    }
 
    car1.displayInfo();
    car2.displayInfo();
    car3.displayInfo();
 
    Motorcycle bike1("Harley Davidson", false);
    Motorcycle bike2("Yamaha", true);
    Motorcycle combinedBike = bike1 + bike2;
 
    combinedBike.displayInfo();
 
    return 0;
}