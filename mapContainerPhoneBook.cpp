#include <iostream>
#include <map>
#include <string>
 
int main() 
{
    std::map<std::string, int> studentScores;
 
    studentScores["Alice"] = 95;
    studentScores["Bob"] = 80;
    studentScores["Charlie"] = 92;
 
    std::cout << "Bob's score: " << studentScores["Bob"] << std::endl;
 
    studentScores["Charlie"] = 98;
    studentScores["Charlie3"] = 198;
    studentScores["Charlie4"] = 298;
 
    if (studentScores.count("Alice") > 0) 
    {
        std::cout << "Alice's score: " << studentScores["Alice"] << std::endl;
    }
 
    for (const auto& entry : studentScores)
    {
        std::cout << "Student: " << entry.first << ", Score: " << entry.second << std::endl;
    }
 
    return 0;
}