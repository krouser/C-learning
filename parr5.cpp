#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 4> arr = {};
    arr.fill(29);
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    

    return 0;
}