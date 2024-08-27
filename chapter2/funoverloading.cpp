// function_overloading
#include<iostream>
using namespace std;
int add(int a,int b)
{
return a+b;
}
int add(int a,int b,int c)
{
return a+b+c;
}
int main()
{
    int a,b,c;
    cout<<"enter first number";
    cin>>a;
    cout<<"enter second number\n";
    cin>>b;
    cout<<"enter third number\n";
    cin>>c;
    cout<<"the sum of first and second number is"<<add(a,b)<<endl;
    cout<<"the sum of first and second number is"<<add(a,b,c);
    return 0;
    
}