#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream obj("mytextfile.txt");
    obj<<"this will be written in the text file\n";
    obj<<"this is second line of code ";
    return 0;
}