#include <iostream>
#include <vector>
#include <string>
 
class Pupil
{
protected:
    std::string name;
    int age;
 
public:
    Pupil(const std::string &name, int age) : name(name), age(age) {}
 
    virtual std::string getGradeLevel() const = 0;
 
    void displayInfo() const
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Grade Level: " << getGradeLevel() << std::endl;
        std::cout << std::endl;
    }
};
 
class Kindergarten : public Pupil
{
public:
    Kindergarten(const std::string &name, int age) : Pupil(name, age) {}
 
    std::string getGradeLevel() const override 
    {
        return "Kindergarten";
    }
};
 
class ElementarySchool : public Pupil
{
private:
    int grade;
 
public:
    ElementarySchool(const std::string &name, int age, int grade) : Pupil(name, age), grade(grade) {}
 
    std::string getGradeLevel() const override 
    {
        return "Elementary School - Grade " + std::to_string(grade);
    }
};
 
class MiddleSchool : public Pupil
{
private:
    int grade;
 
public:
    MiddleSchool(const std::string &name, int age, int grade) : Pupil(name, age), grade(grade) {}
 
    std::string getGradeLevel() const override 
    {
        return "Middle School - Grade " + std::to_string(grade);
    }
};
 
int main() 
{
    std::vector<Pupil*> pupils;
    pupils.push_back(new Kindergarten("Alice", 5));
    pupils.push_back(new ElementarySchool("Bob", 8, 3));
    pupils.push_back(new MiddleSchool("Charlie", 12, 7));
 
    for (const auto& pupil : pupils) 
    {
        pupil->displayInfo();
    }
 
    for (const auto &pupil : pupils) 
    {
        delete pupil;
    }
 
    return 0;
}