#include <iostream>

using namespace std;

class Shape {
public:

    void setValues(float a, float b) {
        length = a;
        breadth = b;
    }

    virtual float area_shape() = 0;
// virtual member is a member function that can be redefined in a derived class
// virtual member function can be defined in the base class only.
// virtual function can be redefined in derived classes while
// abstract functions does not have their implementations.
protected:
    float length, breadth;
};


class Rectangle : public Shape {
public:
    float area_shape() {
        return length * breadth;
    }


};

class Triangle : public Shape {
public:
    float area_shape() {
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

    cout << "Rectangle area: " << rectangle.area_shape() << endl;
    cout << "Triangle area: " << triangle.area_shape();

    return 0;
}
