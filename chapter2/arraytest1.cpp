#include<iostream>
using namespace std;
int main()
{
    int A[5];
    cout<<"enter 5 number\n";
    for(int i=0;i<5;i++)
    {
        cin>>A[i];
    }
    cout<<"the enter array are \n";
       for(int i=0;i<5;i++)
    {
        cout<<A[i]<<"\n";
    }
    return 0;

}