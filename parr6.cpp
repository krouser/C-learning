#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 4> a1 = {11, 12, 13, 14};
    array<int, 4> a2 = {15, 16, 17, 18};
    a1.swap(a2);

    //printing the values of the elements of a1
    cout << "Elements of a1" << endl;
    for (int j = 0; j < a1.size(); j++ )
  	{
    	cout << a1[j] << endl;
  	}

  	//printing the values of the elements of a2
  	cout << "Elements of a2" << endl;
    for (int j = 0; j < a2.size(); j++ )
  	{
    	cout << a2[j] << endl;
  	}

    return 0;
}