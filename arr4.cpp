#include <iostream>
#include <array>
 
int main() 
{
  std::array<int, 15> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
  //int arr2[15] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

  for (int element : arr) 
  {
    std::cout << element << " ";
  }
  
  std::cout << std::endl;
  std::cout << "Size of the array: " << arr.size() << std::endl;
  //std::cout << "Size of the array: " << arr2.sizeof() << std::endl;
  return 0;
}