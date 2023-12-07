#include <iostream>
#include <array>

using namespace std;

void testPrintArray(const std::array<int, 20> &n)
{
    std::cout << "length: " << n.size() << endl;

    /* printing the values of elements of array */
    for (int j = 0; j < n.size(); j++ )
    {
        cout << "n[" << j << "] = " << n[j] << endl;
    }

}

int main()
{

    array<int, 20> n = {1,2,3,4,5,1,2,3,4,5,1,2,3,4,5,1,2,3,4,5};

    testPrintArray(n);

    return 0;
}