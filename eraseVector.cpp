#include<iostream>    
#include<vector> 
 
int main()
{
    std::vector<int> grades{ 100,85,40,68,50, 90, 87 };
 
    std::cout << "The original vector of grades is: " << std::endl;
   
   //Read the grades in the vector using for loop
    for (auto iter = grades.begin(); iter < grades.end(); iter++)
    {
        std::cout << " " << *iter << std::endl;
    }
    grades.erase(grades.begin() + 5);
    grades.erase(grades.begin() + 4);
 
    std::cout << "After erasing the 6th elements the vector of grades is: " << std::endl;
    
    //Read the grades in the vector using for loop
    
    for (auto iter = grades.begin(); iter < grades.end(); iter++)
    {
        std::cout << " " << *iter << std::endl;
    }
    return 0;
}