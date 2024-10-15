// add header file
#include <iostream>
#include <vector>
#include <algorithm>


int main() {
    std::vector<int> values;
    for (int i = 0; i < 10; ++i)
        values.push_back(i*2);
    int key = 14000;
    std::vector<int>::iterator it = std::find(values.begin(), values.end(), key);
    if (it != values.end())
        std::cout << key << " was found\n";
    else
        std::cout << key << " was not found\n";
    return 0;
}