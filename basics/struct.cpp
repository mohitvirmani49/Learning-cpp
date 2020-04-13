#include <iostream>
#include <cstring>

using namespace std;

struct Books {
    char name[20];
    char publisher[20];
    int price;
};

int main() {
    struct Books b1;
    strcpy(b1.name, "Maths");
    strcpy(b1.publisher, "RD Sharma");
    b1.price = 700;

    cout << "Book 1 name is " << b1.name << endl;
    cout << "Book 1 publisher is " << b1.publisher << endl;
    cout << "Book 1 cost is " << b1.price << endl;


    return 0;
}
