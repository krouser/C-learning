#include <vector>
#include <algorithm>
#include <iostream>

// Primary template
template <typename T>
struct ReverseSortData {
    static void reverseSort(T& data) {
        // General reverse sorting logic
        std::sort(data.begin(), data.end(), std::greater<typename T::value_type>());
    }
};

// Partial specialization for std::vector<T*>
template <typename T>
struct ReverseSortData<std::vector<T*>> {
    static void reverseSort(std::vector<T*>& data) {
        std::sort(data.begin(), data.end(), [](T* a, T* b) {
            return *a > *b;
        });
    }
};


// Example usage
int main() {
    std::vector<int*> vec;
    int a = 3, b = 1, d = 4, e = 5, f = 8, g = 7, h = 6, c = 2, i = 9, l = 10, j = 11, k = 12;
    vec.push_back(&a);
    vec.push_back(&b);
    vec.push_back(&c);
    vec.push_back(&d);
    vec.push_back(&e);
    vec.push_back(&f);
    vec.push_back(&g);
    vec.push_back(&h);
    vec.push_back(&i);
    vec.push_back(&j);
    vec.push_back(&k);
    vec.push_back(&l);

    ReverseSortData<std::vector<int*>> sorter;
    sorter.reverseSort(vec);

    for (int* val : vec) {
        std::cout << *val << " ";
    }

    return 0;
}