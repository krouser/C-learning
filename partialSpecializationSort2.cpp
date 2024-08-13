#include <vector>
#include <algorithm>
#include <iostream>

// Primary template
template <typename T>
class SortData {
public:
    void sort(T& data) {
        // General sorting logic
        std::sort(data.begin(), data.end());
    }
};

// Partial specialization for std::vector<T*>
template <typename T>
class SortData<std::vector<T*>> {
public:
    void sort(std::vector<T*>& data) {
        std::sort(data.begin(), data.end(), [](T* a, T* b) {
            return *a < *b;
        });
    }
};

// Example usage
int main() {
    std::vector<int*> vec;
    int a = 3, b = 1, c = 2;
    vec.push_back(&a);
    vec.push_back(&b);
    vec.push_back(&c);

    SortData<std::vector<int*>> sorter;
    sorter.sort(vec);

    for (int* val : vec) {
        std::cout << *val << " ";
    }

    return 0;
}