//find maximum number of 5 number
#include<iostream>
using namespace std;
int main()
{
    int A[5];
    cout<<"enter number\n";
    for(int i=0;i<5;i++)
    {
        cin>>A[i];
    }
    int max=A[0];
    for(int i=0;i<5;i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
    }
    cout<<"the maximum number is\n"<<max;
    return 0;

}