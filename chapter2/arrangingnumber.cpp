#include<iostream>
using namespace std;
int main()
{
    int A[10],temp;
    cout<<"enter the number\n";
    for(int i=0;i<10;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<10;i++)
    {
      for(int j=i+1;j<10;j++)
      {
        if(A[i]>A[j])
        {
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }

      }
         
    }
       for(int i=0;i<10;i++)
    {
        cout<<A[i];
    }
    return 0;
}
