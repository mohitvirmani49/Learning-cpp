#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    ofstream myFile("mohit.txt");  //stream class to write on files
    if (myFile.is_open()) {
        myFile << "Adding First Line in the File\n";
        myFile << "This is Second Line";
        myFile.close();

    } else {
        cout << "Unable to open file\n";
    }

    ifstream myFile2("mohit.txt"); // to read from a file
    string line;
    if (myFile2.is_open()) {
        while (getline(myFile2, line)) {
            cout << line << '\n';
        }
        myFile2.close();
    } else {
        cout << "Unable to open file";
    }
    return 0;

}
