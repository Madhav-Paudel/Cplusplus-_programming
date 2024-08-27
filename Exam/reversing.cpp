#include <iostream>
#include <string>
using namespace std;

class Test {
private:
    string name;
    int length;
public:
    Test() {
        cout << "Enter the string to reverse: ";
        cin >> name;
        length = name.length();
    }

    void reverseit() {
        for (int i = 0; i < length / 2; i++) {
            char ch = name[i];
            name[i] = name[length - i - 1];
            name[length - i - 1] = ch;
        }
    }

    void display() {
        cout << "The reversed string is: " << name << endl;
    }
};

int main() {
    Test obj;
    obj.reverseit();
    obj.display();

    return 0;
}
