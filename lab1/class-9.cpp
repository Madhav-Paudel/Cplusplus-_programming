//Write a C++ program to add two numbers using functions.
#include<iostream>
using namespace std;
int add(int a,int b);
int main()
{
    int a,b;
    cout<<"enter first number\n";
    cin>>a;
    cout<<"enter second number\n";
    cin>>b;
    int d=add(a,b);
    cout<<"the sum of number is"<<"\t"<<d;
    return 0;

}
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}