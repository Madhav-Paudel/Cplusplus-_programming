// WAP for writing and reading variables in files using binary mode
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream outfile("data.bin",ios::binary); // Open file in binary mode for writing

    if (!outfile) {
        cerr << "Error opening file for writing." <<endl;
        return 1;
    }

    int integerVar = 42;
    float floatVar = 3.14f;

    // Write the integer and float variables to the binary file
    outfile.write(reinterpret_cast<char*>(&integerVar), sizeof(integerVar));
    outfile.write(reinterpret_cast<char*>(&floatVar), sizeof(floatVar));

    outfile.close(); // Close the file

    cout << "Data written to file successfully." <<endl;
    return 0;
}