// to demonstrate the concept of destructor.
#include <iostream>
using namespace std;

class demo {
private:
    int a, b;

public:
    demo() {
        cout << "this is default constructor!!@" << endl;
        a = 0;
        b = 0;
    }

    demo(int a, int b) {
        cout << "this is parameterized constructor!!@" << endl;
        this->a = a;
        this->b = b;
    }

    ~demo() {
        cout << "this is default destructor!!@" << endl;
    }

    void adding() {
        int c = a + b;
        cout << "the sum is " << c << endl;
    }
};

int main() {
    demo Dobj(5, 5);
    Dobj.adding();

    demo calling;
    calling.adding();

    return 0;
}
