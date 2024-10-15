#include <iostream>
 
class Shape 
{
public:
    virtual float calculateArea()
    {
        return 0.0;
    }
};
 
class Rectangle : public Shape
{
private:
    float length;
    float width;
 
public:
    Rectangle(float l, float w) : length(l), width(w) {}
 
    float calculateArea() override
    {
        return length * width;
    }
};
 
class Circle : public Shape
{
private:
    float radius;
 
public:
    Circle(float r) : radius(r) {}
 
    float calculateArea() override
    {
        return 3.14159 * radius * radius;
    }
};
 
class Triangle : public Shape
{
private:
    float base;
    float height;
 
public:
    Triangle(float b, float h) : base(b), height(h) {}
 
    float calculateArea() override
    {
        return 0.5 * base * height;
    }
};
 
int main() 
{
    Shape *shape1 = new Rectangle(4.0, 5.0);
    Shape *shape2 = new Circle(3.5);
    Shape *shape3 = new Triangle(2.0, 3.0);
 
    float area1 = shape1->calculateArea();
    float area2 = shape2->calculateArea();
    float area3 = shape3->calculateArea();
 
    std::cout << "Area of Rectangle: " << area1 << std::endl;
    std::cout << "Area of Circle: " << area2 << std::endl;
    std::cout << "Area of Triangle: " << area3 << std::endl;
 
    delete shape1;
    delete shape2;
    delete shape3;
 
    return 0;
}