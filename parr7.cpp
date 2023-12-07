#include <iostream>
#include <array>
#include <iterator>

using namespace std;

int main()
{
    array<int, 4> a = {11, 12, 13, 14};

//AUTO is used to automatically assign the correct type to the variable i by the compiler.

    for(auto i = a.begin(); i != a.end(); ++i)
    {

// cout << *i << endl; - *i is used to access the element at i or the element at which i is pointing.        
    	cout << *i << endl;
    }

    return 0;
}