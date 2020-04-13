#include <iostream>
#include <cstring>

using namespace std;

class Books {
public:
    Books(string x) {  // Constructor 
        setName(x);    // Has same name as class and does not have any return type
    }

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

    Books books("Maths");
    cout << books.getName();

    return 0;
}
