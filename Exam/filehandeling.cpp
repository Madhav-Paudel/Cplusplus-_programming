#include<iostream>
#include<fstream>
using namespace std;

int main() {
    // Opening file for writing
    ofstream out("text.txt");
    if (!out) {
        cout << "File could not be opened!" << endl;
        return 1;
    }

    cout << "Enter your name: ";
    string name;
    cin >> name;

    // Writing to file
    out << name;
    out.close();

    // Opening file for reading
    ifstream in("text.txt");
    if (!in) {
        cout << "File could not be opened!" << endl;
        return 1;
    }

    string name1;
    // Reading from file
    in >> name1;
    cout << "Name read from file: " << name1 << endl;

    in.close();
    return 0;
}
