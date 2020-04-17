# include <iostream>

using namespace std;

int main() {
    try {
        cout << "Enter your age: \n";
        int age;
        cin >> age;
        if (age > 100 || age < 0) {
            throw 'a';
        } else {
            cout << age;
        }
    }
    catch (char e) {
        cout << "Exception occured: " << e;

    }
    return 0;
}
