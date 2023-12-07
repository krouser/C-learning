#include <iostream>
#include <array>
#include <iterator>
#include <algorithm>//for sort

using namespace std;

int main()
{
    array<int, 4> a = {47, 23, 90, 1};

// sort is used to sort the elements in a range in ascending order. We need to add a header algorithm to use it.
    sort(a.begin(),a.end());

    for(auto i = a.begin(); i != a.end(); ++i)
    {
    // cout << *i << endl; - *i is used to access the element at i or the element at which i is pointing.      
    	cout << *i << endl;
    }

    return 0;
}