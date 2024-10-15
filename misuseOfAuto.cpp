// add the header file
#include <iostream>
#include <vector>
#include <algorithm>


int main() {
    std::vector<int> values;
    for (int i = 0; i < 10; ++i)
        values.push_back(i*2);
// the deduced type for the loop control variable, is unsigned. Is there any unsigned value that is not equal to or greater than zero? No. Therefore, when i becomes zero, its next value is the maximum value of the data type—certainly well outside the container's boundary.        
    for (auto i = values.size() - 1; i >= 0; --i)
        std::cout << values[i] << '\n';
    return 0;
}