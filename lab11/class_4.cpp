// 4. Illustration of File I/O with fstream class
#include <iostream>
#include <fstream>
using namespace std;
int main(void)
{
fstream st; // Step 1: Creating object of fstream class
st.open("test.txt", ios::out); // Step 2: Creating new file or open existing file
if (!st) // Step 3: Checking whether file exist
{
cout << "File creation failed or no file exist";
}
else
{
cout << "New file created";
st << "Hello i am madhav"; // Step 4: Writing to file
st.close(); // Step 5: Closing file
}
}