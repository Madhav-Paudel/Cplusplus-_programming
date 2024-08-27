//  Write a program defining the class Distance with data member feet and
// inch as integer. Overload the constructors along with copy constructor. 
// Use the member functions for input and output as  well as to compute the 
// sum of the two objects and return the sum. Show read/write operations in
//  main() using above information.
#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inch;

public:
    // Default constructor
    Distance() {
        feet = 0;
        inch = 0;
    }

    // Parameterized constructor
    Distance(int f, int i) {
        feet = f;
        inch = i;
    }

    // Copy constructor
    Distance(const Distance& d) {
        feet = d.feet;
        inch = d.inch;
    }

    // Member function to input distance
    void inputDistance() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inch;
    }

    // Member function to output distance
    void outputDistance() {
        cout << "Feet: " << feet << ", Inches: " << inch << endl;
    }

    // Member function to compute the sum of two distances
    Distance addDistance(const Distance& d) {
        Distance temp;
        temp.feet = feet + d.feet;
        temp.inch = inch + d.inch;
        if (temp.inch >= 12) {
            temp.feet += temp.inch / 12;
            temp.inch = temp.inch % 12;
        }
        return temp;
    }
};

int main() {
    // Create objects using different constructors
    Distance d1;
    Distance d2(3, 7);
    Distance d3(d2);

    // Input distance
    cout << "Enter distance 1:" << endl;
    d1.inputDistance();

    // Output distance
    cout << "Distance 1: ";
    d1.outputDistance();
    cout << "Distance 2: ";
    d2.outputDistance();
    cout << "Distance 3: ";
    d3.outputDistance();

    // Compute the sum of two distances
    Distance d4 = d1.addDistance(d2);
    cout << "Sum of Distance 1 and Distance 2: ";
    d4.outputDistance();

    return 0;
}
