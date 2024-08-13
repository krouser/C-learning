#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
 
template <typename T>
void SortData(std::vector<T>& data)
{
    std::sort(data.begin(), data.end());
    std::cout << "Using generic template SortData" << std::endl;
}
 
class Person
{
public:
    Person(std::string name, int age) : name_(std::move(name)), age_(age) {}
 
    std::string GetName() const { return name_; }
    int GetAge() const { return age_; }
 
private:
    std::string name_;
    int age_;
};
 
template <>
void SortData(std::vector<Person>& data)
{
    std::sort(data.begin(), data.end(), [](const Person& p1, const Person& p2) {
        return p1.GetAge() < p2.GetAge();
        });
    std::cout << "Using template specialization for Person objects" << std::endl;
}
 
template <typename T>
void PrintVector(const std::vector<T>& vec)
{
    for (const auto& item : vec)
    {
        std::cout << item << " ";
    }
    std::cout << std::endl;
}
 
int main()
{
    std::vector<int> numbers{ 5, 2, 8, 1, 6 };
    SortData(numbers);
    PrintVector(numbers); 
 
    std::vector<Person> people
    {
        Person("Alice", 25),
        Person("Bob", 30),
        Person("Charlie", 20),
        Person("Stefan", 1),
        Person("Linda", 31),
        Person("Stanley", 32)

    };
    SortData(people);
    for (const auto& person : people)
    {
        std::cout << person.GetName() << " (" << person.GetAge() << ") ";
    }
 
    return 0;
}