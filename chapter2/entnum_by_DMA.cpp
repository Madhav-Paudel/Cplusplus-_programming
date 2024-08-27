#include<iostream>
using namespace std;
int main()
{
    int number;
    int *ptr;
    cout<<"enter the size of array";
    cin>>number;
    ptr=new (nothrow)int[number];
    if(ptr!=NULL)
    {
        cout<<"allocation done\n";
    }
    for(int i=0;i<number;i++)
    {
        cout<<"enter the array\n";
        cin>>ptr[i];
    }
    cout<<"enter number are as"<<endl;
      for(int i=0;i<number;i++)
    {
      
        cout<<ptr[i]<<endl;
    }
    return 0;
}