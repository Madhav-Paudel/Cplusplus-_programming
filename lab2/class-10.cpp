//WAP to demonstrate the concept of function pointer
#include<iostream>
using namespace std;

// A simple function
void greet() {
    cout << "Hello from greet function!" << endl;
}

int main() {
    // Declare a function pointer
    void (*funcPtr)();

    // Assign function address to the pointer
    funcPtr = greet;

    // Call the function using the pointer
    funcPtr();

    return 0;
}
