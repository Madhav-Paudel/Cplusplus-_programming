// pass by pointer 

#include <iostream>
using namespace std;

void swapping(int *x, int *y); // Change return type to void

int main() {
    int a = 100;
    int b = 200;

    cout << "Before swapping:" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    swapping(&a, &b);

    cout << "After swapping:" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0; // Optional but good practice in main
}

void swapping(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
