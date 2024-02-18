#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);

    cout << mySpan.back();
}