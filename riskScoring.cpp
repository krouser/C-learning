//we are going to develop a cpp program that will calculate the risk of a person based on the following rules:
//1. If the person has an income of more than 5000 and age is less 30, then the person is at low risk.
//2. If the person has an income of more than 5000 and age is more 30, then the person is at medium risk.
//3. If the person has an income of less than 5000 and age is less than 30, then the person is at medium risk.
//4. If the person has an income of less than 5000 and age is more than 30, then the person is at high risk.
//The program will take the age and income of the person as input and will output the risk of the person.
//The program will be implemented using java programming language.
//The program will be implemented using the following steps:    

//1. Take the age and income of the person as input.
//2. Check the age and income of the person based on the above rules.
//3. Output the risk of the person based on the above rules.
// if the customer is already working with the bank then the risk will be low
// if the customer is not working with the bank then the risk will be high
//4. End the program.

#include <iostream>
using namespace std;

int main() {
    int age;
    int income;
    string working;
    cout << "Enter the age of the person: ";
    cin >> age;
    cout << "Enter the income of the person: ";
    cin >> income;
    cout << "Is the person working with the bank? (yes/no): ";
    cin >> working;
    if (working == "yes") {
        cout << "The risk of the person is low." << endl;
    } else {
        if (income > 5000 && age < 30) {
            cout << "The risk of the person is low." << endl;
        } else if (income > 5000 && age >= 30) {
            cout << "The risk of the person is medium." << endl;
        } else if (income < 5000 && age < 30) {
            cout << "The risk of the person is medium." << endl;
        } else {
            cout << "The risk of the person is high." << endl;
        }
    }
    return 0;
}

//Output
//Enter the age of the person: 25
//Enter the income of the person: 6000
//Is the person working with the bank? (yes/no): no
//The risk of the person is low.
//Enter the age of the person: 35
//Enter the income of the person: 4000







