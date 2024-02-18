#include <iostream>

using namespace std;

void swap( int *a, int *b )
{
	int t;
	t = *a; ///  We took any integer t and gave it a value '*a'.
	*a = *b; /// Now, *a is *b. This means that now the values of *a and *b will be equal to that of *b.
	*b = t; /// Since 't' has an initial value of '*a', therefore, '*b' will also contain that initial value of '*a'. 

            /// Thus, we have interchanged the values of the two variables.

}

int main(){
	int num1, num2;
	cout << "Enter first number" << endl;
	cin >> num1;
	cout << "Enter second number" << endl;
	cin >> num2;
	swap( &num1, &num2);
	cout << "First number = " << num1 << endl;
	cout << "Second number = " << num2 << endl;
	return 0;
}