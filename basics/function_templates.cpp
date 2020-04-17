# include <iostream>

using namespace std;

template<class type>  // used to automatically adjust to the datatype used in the main function.
type add(type a, type b) {
    return a + b;
}

int main() {
    int a = 17;
    int b = 12;
    cout << add(a, b);

    return 0;
}
