
// 4. WAP for writing and reading objects from disk file
#include <iostream>
#include <fstream>
#include <cstring> // For strcpy and strncpy

using namespace std;

class Person {
public:
    char name[100]; // Fixed-size character array
    int age;

    // Default constructor
    Person() : age(0) {
        strcpy(name, ""); // Initialize name to an empty string
    }

    // Parameterized constructor
    Person(const char* n, int a) : age(a) {
        strncpy(name, n, sizeof(name) - 1);
        name[sizeof(name) - 1] = '\0'; // Ensure null termination
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Create a Person object
    Person p1("Alice", 30);

    // Open a file for writing in binary mode
    ofstream outfile("person.dat", ios::binary);
    if (!outfile) {
        cerr << "Error opening file for writing." << endl;
        return 1;
    }

    // Write the Person object to the file
    outfile.write((char*)&p1, sizeof(p1));

    // Close the file
    outfile.close();

    // Open the file for reading in binary mode
    ifstream infile("person.dat", ios::binary);
    if (!infile) {
        cerr << "Error opening file for reading." << endl;
        return 1;
    }

    // Create an empty Person object to read data into
    Person p2;

    // Read the Person object from the file
    infile.read((char*)&p2, sizeof(p2));

    // Close the file
    infile.close();

    // Display the read Person object's data
    p2.display();

    return 0;
}
