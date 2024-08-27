// concept of Default values in functions Arguments 
#include<iostream>
using namespace std;
int add(int a,int b,int c=0)
// A.int add(int a,int c=5,int b)(X) this is wrong because while writing default arguments you need to write from left to right <----
{
return a+b+c;
}
int main()
{
    int a=2,b=3;
    cout<<"the addition is "<<add(a,b)<<endl;
    return 0;
    // here we have not write{add(a,b,c)} because we already provide the argument in the parameter if we  write c it would not wrong
    // here a value assign to a and b value to b | if we wrote add(int a,int c=5,int b ) like this then a=a, b=c then b remain null which show error 
}