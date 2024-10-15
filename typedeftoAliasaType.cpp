// add the header file
#include <iostream>

typedef int (*MathFunction)(int, int);
 
int add(int a, int b) {
    return a + b;
}
 
int sub(int a, int b) {
    return a - b;
}
 
int main() {
    MathFunction f = add;
    std::cout << "Result of addition: " << f(5, 3) << std::endl;
    f = sub;
    std::cout << "Result of subtraction: " << f(5, 3) << std::endl;
    return 0;
}