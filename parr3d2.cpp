#include <iostream>
#include <array>
using namespace std;

void display(const std::array<std::array<int, 3>, 3> &a)
{

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
    //return 0;
}

int main()
{
    array<array<int, 3>, 3> n  {{{1,2,3},{4,5,6},{7,8,9}}};
    display(n);
    return 0;
}