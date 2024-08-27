// WAP to demonstrate the concept of const argument.
#include <iostream>
using namespace std;

// Function that takes a const argument
void displayNumber(const int b) {
    // b cannot be modified in this function because it is a const argument
    cout << "The value of b inside the function is: " << b << endl;

    // Uncommenting the following line will cause a compilation error because b is const
    // b = 200;
}

int main() {
    const int a = 100; // const variable
    cout << "The value of a in main is: " << a << endl;

    // Pass the const variable to the function
    displayNumber(a);

    return 0;
}
