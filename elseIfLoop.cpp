#include <iostream>
int main()
{
    using namespace std;
    int x = 4, y = 15, z = 11;;
	
	/// if the condition (x>y && x>z) is true (if both are true, means x is the greatest ), 
	///then the statements enclosed within the curly brackets {} of the first if condition will be executed.
    if ( (x > y) && (x > z) ){
        cout << "x is the greatest integer" << endl;
    }
	
	
	///If not so, then it will go to else if and check for (y>x && y>z). 
	///If this condition is true, then the corresponding statements will be executed
    else if ( (y > x) && (y > z) ){
        cout << "y is the greatest integer" << endl;
    }
	
	
	///otherwise, it will go to else.
    else
        cout << "z1 is the greatest integer" << endl;
    return 0;
}