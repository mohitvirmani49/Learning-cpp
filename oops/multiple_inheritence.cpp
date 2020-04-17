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

class Vol {
public:
    void vol(float c) {
        height = c;
    }

protected:
    float height;
};

class Rectangle : public Shape, public Vol {
public:
    float area() {
        return length * breadth;
    }

    float volume() {
        return length * breadth * height;
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
    rectangle.vol(5);
    triangle.setValues(4, 9);

    cout << "Rectangle area: " << rectangle.area() << endl;
    cout << "Rectangle volume: " << rectangle.volume() << endl;
    cout << "Triangle area: " << triangle.area();

    return 0;
}
