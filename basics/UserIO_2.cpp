#include <iostream>
// Read n values from user and print them after separating by ',' and '.'
using namespace std;

int main() {
    int n;
    int a[5];

    cout << "Number of values you want to enter: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter " << i + 1 << " Number:";
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] >= 0 && a[i] <= 100) {
            while (i != n - 1) {
                cout << a[i] << ",";
                i++;
            }
            cout << a[n - 1] << ".";

        } else {
            cout << "Number is not in range";
        }
    }
}
