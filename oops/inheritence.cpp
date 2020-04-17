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

    rectangle.setValues(5, 8);
    triangle.setValues(4, 9);

    cout << "Rectangle area: " << rectangle.area();
    cout << "Triangle area: " << triangle.area();

    return 0;
}
