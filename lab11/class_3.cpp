// 3. WAP for writing and reading of user input to file
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main(void)
{
string data;
// open a file in write mode.
ofstream outfile;
outfile.open("afile.dat"); //also creates new one if file not exist
cout << "Writing to the file" << endl;
cout << "Enter your name: ";
getline(cin, data);
// write inputted data into the file.
outfile << data << endl;
cout << "Enter your age: ";
cin >> data;
// again write inputted data into the file.
outfile << data << endl;

cout << "Enter your address: ";
cin >> data;
// again write inputted data into the file.
outfile << data << endl;
// close the opened file.
outfile.close();
// open a file in read mode.
ifstream infile;
infile.open("afile.dat");
cout << "Reading from the file" << endl;
infile >> data;
// display or write the data at the screen.
cout << data << endl;
// again read the data from the file and display it.
infile >> data;
cout << data << endl;
// again read the data from the file and display it.
infile >> data;
cout << data << endl;
//close the opened file.
infile.close();
}