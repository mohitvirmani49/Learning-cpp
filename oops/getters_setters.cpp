#include <iostream>
#include <cstring>

using namespace std;

class Books {
public:
    void setName(string x) {
        name = x;
    }

    string getName() {
        return name;
    }

private:
    string name;
};

int main() {

    Books books;
    books.setName("Maths");
    cout << books.getName();

    return 0;
}
