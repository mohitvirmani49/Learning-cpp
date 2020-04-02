#include <iostream>
// basic calculator
using namespace std;

void addition(float a, float b);

void multiplication(float a, float b);

void subtraction(float a, float b);

void division(float a, float b);

int main() {
    float firstNumber, secondNumber;
    cout << "Enter your First Number: ";
    cin >> firstNumber;
    cout << "Enter your Second Number: ";
    cin >> secondNumber;

    int n;
    cout << "Addition = 1\n";
    cout << "Subtraction = 2\n";
    cout << "Multiplication = 3\n";
    cout << "Division = 4\n";
    cin >> n;

    switch (n) {
        case 1:
            addition(firstNumber, secondNumber);
            break;
        case 2:
            subtraction(firstNumber, secondNumber);
            break;
        case 3:
            multiplication(firstNumber, secondNumber);
            break;
        case 4:
            division(firstNumber, secondNumber);
            break;
        default:
            cout << "Please select correct value";

    }
}

void addition(float a, float b) {
    float sum = a + b;
    cout << sum;
}

void subtraction(float a, float b) {
    float diff = a - b;
    cout << diff;

}

void multiplication(float a, float b) {
    float multiply = a * b;
    cout << multiply;

}

void division(float a, float b) {
    if (b != 0) {
        float divide = a / b;
        cout << divide;
    } else {
        cout << "Infinity";
    }

}
