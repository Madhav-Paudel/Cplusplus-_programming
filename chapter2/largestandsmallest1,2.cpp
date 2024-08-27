#include<iostream>
using namespace std;
int main()
{
    int A[10];
 
    scout<<"enter array\n";
    for(int i=0;i<10;i++)
    {
        cin>>A[i];
    }
 int max=A[0];
    int max1=A[1];
    int min=A[0];
    int min1=A[1];
   
    // for large
    for(int i=0;i<10;i++)
    {
        if(A[i]>max)
        {
            max1=max;
            max=min1;
        }
    }
    //for small
    for(int i=0;i<10;i++)
    {
        if(A[i]<min)
        {
            min1=min;
            min=A[i];
        }
    }

cout<<"largest number is "<<max<<"\n";
cout<<"second largest is "<<max1<<"\n";
cout<<"smallest number is "<<min<<"\n";
cout<<"second smallest is "<<min1<<"\n";
    return 0;
}