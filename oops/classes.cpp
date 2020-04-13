#include <iostream>
#include <cstring>

using namespace std;

class Book {
public:
    int price = 250;

    void printPrice() {
        cout << price;
    }
};

int main() {
    Book b1;
    b1.printPrice();
    cout << "\n" << b1.price;

    return 0;
}
