#include <iostream>
#include <string>
 
int main() 
{
    std::string s1 ="I am learning";
    std::string s2 =" C+";
    s1.append(s2);
    std::cout << s1 << std::endl;
    return 0;
}