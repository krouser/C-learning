#include <iostream>

//using namespace std;

int main(){
	int a = 10;
  	int *p;
  	p = &a;
  	std::cout << "p = " << p << " p is a pointer to a,  'p' stores the address of a. So the output p = 0x5ffe90c implies that 0x5ffe9c is the address of 'a'.  " << std::endl;
  	std::cout << "*p = " << *p << " Since 'a' has a value of 10, so '*p' is 10 " << std::endl;
  	std::cout << "&p = " << &p << "'&p' represents the address of 'p' which is 0x5ffe90. " << std::endl;
  	std::cout << "*&p = " << *&p << " '*&p' is the value of '&p' and the value of '&p' is the address of 'a' 0x5ffe90c.  " <<  std::endl;
	return 0;
}