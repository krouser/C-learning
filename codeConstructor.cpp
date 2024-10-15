#include <iostream>
#include <string>

struct Person {
    int age;
    std::string name;
    Person(std::string n, int a) : name(n), age(setAge(a)) {}
    int setAge(int);
};
int Person::setAge(int a) {
    if (a < 0)
        throw std::out_of_range("age must be non-negative");
    age = a;
    return age;
}
 
int main() {
    Person annie("Annette", 25);
    Person floyd("Floyd", -1);
}