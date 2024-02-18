#include <iostream>
 
int Calculate(int firstNumber, int secondNumber, int factor1 = 40, int factor2 = 200);
int Calculate(int firstNumber, int secondNumber, int factor1, int factor2)
{
    std::cout << "\tCalculate started..." << std::endl;
    int result = firstNumber + secondNumber;
    std::cout << "\t[1]result( " << result << ") = " << firstNumber << " + " << secondNumber << std::endl;
    int oldResult{ result };
    result *= factor1;
    std::cout << "\t[2]result( " << result << ") = " << oldResult << " x " << factor1 << std::endl;
    oldResult = result;
    if (result > factor2)
    {
        std::cout << "\t[3]result( " << result << ") is larger than " << factor2 << " so ";
        result -= factor2;
        std::cout << "result(" << result << ") = result(" << oldResult << ") - factor2(" << factor2 << ")" << std::endl;
 
    }
    std::cout << "\tCalculate ended. result = " << result << std::endl;
    return result;
}
 
int main()
{
    int firstNumber{ 10 }, secondNumber{ 20 };
    int thirdNumber{ 30 }, forthNumber{ 45 };
    int result = Calculate(firstNumber, secondNumber, 25);
    std::cout << "Result of Calculate(" << firstNumber << "," << secondNumber << "," << 25 << ") = " << result << std::endl;
 
    int secondResult = Calculate(thirdNumber, forthNumber, 25, 200);
    std::cout << "Result of Calculate(" << thirdNumber << "," << forthNumber << "," << 25 << "," << 200 << ") = " << secondResult << std::endl;
 
    int m = Calculate(200, 40);
    std::cout << "Result of Calculate(" << 200 << "," << 40 << ") = " << m << std::endl;
 
}