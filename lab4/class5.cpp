// WAP to find the result of a student where marks are
// taken from a parametrized constructor. Also, there are two methods called
// calcDiv and result. The calcDiv method returns the total mark. This total mark
// is passed to the result method and then the student’s division is displayed.
// The constructor is used outside the class
#include <iostream>
using namespace std;

class Student {
private:
    int marks1, marks2, marks3;
    int totalMarks;
public:
    // Parameterized constructor
    Student(int m1, int m2, int m3) {
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }

    // Method to calculate total marks
    int calcDiv() {
        totalMarks = marks1 + marks2 + marks3;
        return totalMarks;
    }

    // Method to determine and display division
    void result(int total) {
        int maxMarks = 300;  // Assuming each subject is out of 100
        double percentage = (double) total / maxMarks * 100;

        if (percentage >= 60) {
            cout << "First Division" << endl;
        } else if (percentage >= 45) {
            cout << "Second Division" << endl;
        } else if (percentage >= 33) {
            cout << "Third Division" << endl;
        } else {
            cout << "Fail" << endl;
        }
    }
};

int main() {
    // Create an instance of Student class with marks for three subjects
    Student student(70, 80, 90);

    // Calculate total marks
    int total = student.calcDiv();

    // Display the result based on total marks
    student.result(total);

    return 0;
}
