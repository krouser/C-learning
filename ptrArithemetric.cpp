#include <iostream>
#include <span>

//using namespace std;
 
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    span<int> span(arr, std::size(arr));
 
    auto ptr_add = span.data() + 3;
    std::cout << "After addition: " << *ptr_add << std::endl;
 
    auto ptr_sub = span.data() + 7;
    std::cout << "After subtraction: " << *ptr_sub << std::endl;
 
    auto ptr_diff = ptr_sub - ptr_add;
    std::cout << "Pointer difference: " << ptr_diff << std::endl;
 
    ++(*span.data());
    std::cout << "After increment: " << *span.data() << std::endl;
 
    --(*(span.data() + std::size(arr) - 1));
    std::cout << "After decrement: " << *(span.data() + std::size(arr) - 1) << std::endl;
 
    auto ptr_diff2 = (span.data() + 8) - (span.data() + 3);
    std::cout << "Pointer difference (example 2): " << ptr_diff2 << std::endl;
 
    return 0;
}