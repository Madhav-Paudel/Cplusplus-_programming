// WAP to find the sum of two numbers where the first
// number is taken from a default constructor and 
// the second number is taken from a parametrized constructor. 
// Compute the sum within a copy constructor and display it.

  #include <iostream>
using namespace std;

class Sum {
private:
    int a, b;

public:
    // Default constructor to initialize the first number
    Sum() {
        cout << "Enter the first number for addition: ";
        cin >> a;
    }

    // Parameterized constructor to initialize the second number
    Sum(int x) {
        b = x;
    }

    // Function to set the second number
    void setSecondNumber(int x) {
        b = x;
    }

    // Function to compute and display the sum
    void computeSum() {
        int addition = a + b;
        cout << "The addition is " << addition << endl;
    }
};

int main() {
    Sum firstNumber; // Calls the default constructor to input the first number
    Sum secondNumber(5); // Calls the parameterized constructor with the second number

    // Transfer the value of the second number to the firstNumber object
    firstNumber.setSecondNumber(5);

    // Compute and display the sum
    firstNumber.computeSum();

    return 0;
}
