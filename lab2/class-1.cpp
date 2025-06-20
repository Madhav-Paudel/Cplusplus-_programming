// concept of DMA using new and delete
#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter how many number you want to enter\n";
    cin>>size;
    int *ptr;
    ptr=new int[size];
    for(int i=0;i<size;i++)
    {
    cout<<"enter"<<i+1<<"number\n";
    cin>>ptr[i];
    }
    // for display
    // ____________________________________________________
      for(int i=0;i<size;i++)
    {
    cout<<"entered"<<i+1<<"number\n";
    cout<<ptr[i]<<endl;
    }
delete (ptr);
    
}