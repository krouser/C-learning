#include <iostream>
#include <array>
using namespace std;

// std::array<std::array<int, 3>, 3> a { {{1,2,3}, {4,5,6}, {7,8,9}} };

// The inner array (std::array<int, 3>) is an array of 3 integers and the outer array is an array of 3 such inner arrays (std::array<inner array, 3>).

int main()
{
    array<array<int, 3>, 3> a  {{{1,2,3},{4,5,6},{7,8,9}}};
    
    /* printing the values of elements of outter array */
    
    for(int i=0; i<3; i++)
    {

    /* printing the values of elements of inner array */    
        for(int j=0; j<3; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}