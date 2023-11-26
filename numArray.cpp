#include <iostream>
 
int main(void)
{
    int numbers[]{ 1,3,4,6,7,25,54,44,35,-1 };
    int i{ -1 }; 
    int does_not_divide{ 0 };
 
    while (true)
    {
        i++;
        if (numbers[i] == -1) break;
        if ((numbers[i] % 5) == 0)
        {
            std::cout << "number " << numbers[i] << " divides by 5" << std::endl;
            continue;
        }
        std::cout << "number " << numbers[i] << " does not divide by 5" << std::endl;
        does_not_divide++;
    }
    std::cout << "There are " << does_not_divide << " numbers found not divided by 5" << std::endl;
}