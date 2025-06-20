// to demonstrate the pass by reference
// in this program we directly pass the value from one function to another function.
#include<iostream>
using namespace std;
int swap(int &x,int &y);
int main()
{
    int a=10;
    int b=20;

    cout<<"the value a before swapping a:"<<a<<endl;
    cout<<"the value b before swapping b:"<<b<<endl;
    swap(a,b);
    cout<<"the value a after swapping a:"<<a<<endl;
    cout<<"the value b after swapping b:"<<b<<endl;


}
int swap(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
 return(x,y);
}