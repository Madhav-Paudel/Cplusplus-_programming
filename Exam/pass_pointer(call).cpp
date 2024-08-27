// pass by pointer /call by address
#include<iostream>
using namespace std;
int swapping(int *x,int *y);
int main()
{
    int a=10;
    int b=20;
    cout<<"before swapping:"<<endl;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    swapping(&a,&b);
    cout<<"after swapping:"<<endl;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
}
int swapping(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}