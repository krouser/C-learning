#include <iostream>
 
int main()
{
    int *some_ptr{ nullptr };
    some_ptr = new int;
 
    std::cout << "The address of the new int object we created is: " << some_ptr << std::endl;
 
    std::cout << "Since we didn't initialize our pointer we get some garbage  data: " << *some_ptr << std::endl;
 
    *some_ptr = 42;
 
    std::cout << "Now we initialized our pointer and its value is: " << *some_ptr << std::endl;
}