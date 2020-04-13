#include <iostream>

using namespace std;

class Books {
public:
    Books() {                     // Constructor
        cout << "Constructor\n";  // Has same name as class and does not have any return type
    }

    ~Books() {                   // Destructor
        cout << "Destructor";    // Called when object goes out of scope. '~' is called tilde
    }
};


int main() {
    Books b1;
    cout << "One\n";
    cout << "Two\n";

    return 0;
}
