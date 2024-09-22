// WAP for reading object from disk file
#include <iostream>
#include <fstream>
#include <cstring> // Include for strncpy

class Student {
public:
    char name[50];
    int age;
    float grade;

    // Default constructor
    Student() : age(0), grade(0.0f) {
        name[0] = '\0';  // Initialize name to an empty string
    }

    // Parameterized constructor
    Student(const char* name, int age, float grade) : age(age), grade(grade) {
        strncpy(this->name, name, sizeof(this->name) - 1);
        this->name[sizeof(this->name) - 1] = '\0'; // Ensure null termination
    }

    // Method to display student details
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Grade: " << grade << std::endl;
    }
};

// Function to read a Student object from a binary file
void readStudentFromFile(const char* filename, Student& student) {
    std::ifstream infile(filename, std::ios::binary);
    if (!infile) {
        std::cerr << "Error opening file for reading." << std::endl;
        return;
    }

    // Read the Student object from the binary file
    infile.read(reinterpret_cast<char*>(&student), sizeof(Student));
    
    infile.close();
    std::cout << "Student data read from file successfully." << std::endl;
}

int main() {
    const char* filename = "student.dat";

    // Create an empty Student object to read data into
    Student studentIn;

    // Read the Student object from the binary file
    readStudentFromFile(filename, studentIn);

    // Display the read Student object's data
    studentIn.display();

    return 0;
}
