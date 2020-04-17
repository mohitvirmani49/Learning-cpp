#include <iostream>

using namespace std;

class Shape {
public:

    void setValues(float a, float b) {
        length = a;
        breadth = b;
    }

protected:
    float length, breadth;
};


class Rectangle : public Shape {
public:
    float area() {
        return length * breadth;
    }

};

class Triangle : public Shape {
public:
    float area() {
        return 0.5 * length * breadth;
    }
};

int main() {
    Rectangle rectangle;
    Triangle triangle;
    Shape *polygon1 = &rectangle;  // Polymorphism, many forms, rect and triangle in form of shape class
    Shape *polygon2 = &triangle;   // given the address of triangle object in shape class
    polygon1->setValues(10, 20);
    polygon2->setValues(10, 20);

    cout << "Rectangle area: " << rectangle.area() << endl;
    cout << "Triangle area: " << triangle.area();

    return 0;
}
