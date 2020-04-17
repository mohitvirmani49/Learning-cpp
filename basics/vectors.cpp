# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;

int main() {
    vector<int> my_vector;
    my_vector.push_back(10);
    my_vector.push_back(20);
    my_vector.push_back(30);
    my_vector.push_back(40);
    cout << "Size of Vector: " << my_vector.size() << endl;

    for (int i = 0; i < my_vector.size(); i++) {
        cout << i << ": " << my_vector[i] << endl;
    }

    my_vector.erase(my_vector.begin() + 2); // delete vector at index 2 from beginning.
    my_vector.erase(remove(my_vector.begin(), my_vector.end(), 30),
                    my_vector.end());  // if we want to remove vector by number instead of id.
    return 0;
}
