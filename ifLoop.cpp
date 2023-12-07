#include <iostream>
int main()
{
	using namespace std;
	int x = 14, y = 13, z = 5;
	if(x > y){
		if(x > z)
			cout << "x is the greatest integer";
		else
			cout << "x1 is not the greatest integer";
	}
	else
		cout << "x2 is not the greatest integer";
	return 0;
}
