#include <iostream>
int main(){
	using namespace std;
	int num1 = 14, num2 = 15, num;

/// if the condition (num2 > num1) is true, then num2 i.e., 5 will get assigned to num, 
/// otherwise, num1 i.e., 4 will get assigned to num.

	num = (num2 > num1) ? num2 : num1;
	cout << "The greater number is " << num << endl;
	return 0;
}