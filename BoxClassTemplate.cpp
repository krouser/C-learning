#include <iostream>
 
template <typename T>
class Box
{
public:
    Box(const T l, const T w, const T h)
        : length(l), width(w), height(h)
    {
    }
 
    T calculateVolume() const
    {
        return length * width * height;
    }
 
    void displayDimensions() const
    {
        std::cout << "Box dimensions: " << length << " x " << width << " x " << height << std::endl;
    }
 
private:
    const T length;
    const T width;
    const T height;
 
};
 
int main()
{
    Box<int> intBox(4, 5, 6);
    intBox.displayDimensions();
    std::cout << "Volume: " << intBox.calculateVolume() << std::endl;
 
    Box<double> doubleBox(2.5, 3.5, 4.5);
    doubleBox.displayDimensions();
    std::cout << "Volume: " << doubleBox.calculateVolume() << std::endl;
 
    return 0;
}