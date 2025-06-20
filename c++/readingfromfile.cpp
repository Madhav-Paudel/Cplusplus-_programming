#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    const int len=100;
    char text[len];
    ifstream infile("mytextfile.txt");
    while(infile)
    {
        infile.getline(text,len);
        cout<<endl<<text;
    }
}