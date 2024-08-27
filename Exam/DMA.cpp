#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter the size of the array"<<endl;
    cin>>size;
    int *ptr=new int[size];
    for(int i=0;i<size;i++)
    {
        cout<<"enter the "<<i<<" array"<<endl;
        cin>>ptr[i];
    }
    cout<<"The number you enter are "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"\nthe entered "<<i<<" array"<<endl;
        cout<<ptr[i];
    }
    delete(ptr);
}