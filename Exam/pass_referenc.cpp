// pass by reference/ call by reference
#include<iostream>
using namespace std;
int swapping(int &a,int &b);
int main()
{
    int x=5,y=10;
    cout<<"Before swapping:"<<endl<<"x="<<x<<endl<<"Y="<<y<<endl;
    swapping(x,y);
    cout<<"After swapping:"<<endl<<"x="<<x<<endl<<"Y="<<y<<endl;

    return 0;
}
int swapping(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    return 0;
}
