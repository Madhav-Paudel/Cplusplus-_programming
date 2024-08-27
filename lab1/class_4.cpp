#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char name[2][50], address[2][50];

    cout << "Enter names:\n";
    for (int i = 0; i < 2; i++) { 
        cout << "Name " << i + 1 << ": ";
        cin >> ws; 
        cin.getline(name[i], 50);
    }

    cout << "Enter addresses:\n";
    for (int i = 0; i < 2; i++) {
        cout << "Address " << i + 1 << ": ";
        cin >> ws; 
        cin.getline(address[i], 50);
    }

    cout << left << setw(15) << "NAME" << "ADDRESS" << endl;
    cout << "--------------------------------" << endl;
    for (int i = 0; i < 2; i++) {
        cout << left << setw(15) << name[i] << address[i] << endl;
    }

    return 0;
}