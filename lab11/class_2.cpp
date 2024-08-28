// 2. WAP for reading from disk file
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
fstream st; // step 1: Creating object of fstream class
st.open("test.txt", ios::in); // Step 2: Creating new file or open existing file
if (!st) // Step 3: Checking whether file exist
{
cout << "No such file";
}
else
{
char ch;
while (!st.eof())
{
st >> ch; // Step 4: Reading from file
cout << ch; // Message display
}
st.close(); // Step 5: Closing file
}
}