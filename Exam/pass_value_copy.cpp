// pass by value/ call by value / pass by copy/ call by copy 
#include<iostream>
using namespace std;
int swapping(int x,int y);
int main()
{
    int a=100;
    int b=200;
    cout<<"before swapping:"<<endl;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    swapping(a,b);
    cout<<"after swapping:"<<endl;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;

}
int swapping(int x,int y)
{
    int temp;
    temp=x;
   x=y;
   y=temp;
    return 0;
}