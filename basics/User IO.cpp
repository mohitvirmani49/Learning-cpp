#include <iostream>
#include <string>

using namespace std;

int main() {

    int age;
    cout << "Enter your age: ";
    cin >> age;
    cin.ignore();  // extraction stops if EOF is reached so to get second input we use this

    string userName;
    cout << "Enter your username: ";
    getline(cin, userName);

    cout << "Your age is " << age << "\n";
    cout << "Hello " << userName << "\n";
    return 0;

}
