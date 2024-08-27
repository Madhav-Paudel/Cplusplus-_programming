// WAP to demonstrate the simple concept of pointer
#include<iostream>
using namespace std;
int main()
{
    int A[10];
    int *ptr;
    cout<<"enter 10 number\n";
    for(int i=0;i<10;i++)
    {
        cin>>A[i];
    }
    ptr=A;
    cout<<"number are\n";
    for(int i=0;i<10;i++)
    {
        cout<< ptr[i];
    }
}