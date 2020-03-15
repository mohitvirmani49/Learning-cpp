#include <iostream>

using namespace std;

int main() {
    enum MONTHS {
        jan, feb, march, apr, may, june, july, aug, sep, oct, nov, dec
    };

    MONTHS newMonth;

    newMonth = apr;
    cout << newMonth;
}
