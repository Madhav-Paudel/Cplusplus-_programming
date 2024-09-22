//  WAP for writing object to disk 
#include <iostream>
#include <fstream>
#include <string>
#include <cstring> // Include for strncpy
using namespace std;
class Student {
public:
    char name[50];
    int age;
    float grade;

    // Constructor
    Student() : age(0), grade(0.0f) {
        name[0] = '\0';  // Initialize name to an empty string
    }

    Student(const char* name, int age, float grade) : age(age), grade(grade) {
        strncpy(this->name, name, sizeof(this->name) - 1);
        this->name[sizeof(this->name) - 1] = '\0'; // Ensure null termination
    }

    // Method to display student details
    void display() const {
        cout << "Name: " << name << ", Age: " << age << ", Grade: " << grade <<endl;
    }
};

// Function to write a Student object to a binary file
void writeStudentToFile(const char* filename, const Student& student) {
    std::ofstream outfile(filename,ios::binary);
    if (!outfile) {
        cerr << "Error opening file for writing." <<endl;
        return;
    }

    // Write the Student object to the binary file
    outfile.write(reinterpret_cast<const char*>(&student), sizeof(Student));
    
    outfile.close();
    cout << "Student data written to file successfully." <<endl;
}

// Function to read a Student object from a binary file
void readStudentFromFile(const char* filename, Student& student) {
    ifstream infile(filename, ios::binary);
    if (!infile) {
        cerr << "Error opening file for reading." <<endl;
        return;
    }

    // Read the Student object from the binary file
    infile.read(reinterpret_cast<char*>(&student), sizeof(Student));
    
    infile.close();
    cout << "Student data read from file successfully." <<endl;
}

int main() {
    const char* filename = "student.dat";
    
    // Create a Student object
    Student studentOut("John Doe", 20, 85.5f);

    // Write the Student object to a binary file
    writeStudentToFile(filename, studentOut);

    // Create an empty Student object to read data into
    Student studentIn;

    // Read the Student object from the binary file
    readStudentFromFile(filename, studentIn);

    // Display the read Student object's data
    studentIn.display();

    return 0;
}
