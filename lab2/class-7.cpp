// WAP to demonstrate function overloading.
#include<iostream>
using namespace std;
int add(int a,int b)
{
    return(a+b);
}
int add(int a,int b,int c)
{
    return(a+b+c);
}
int add(int a,int b,int c,int d)
{
    return(a+b+c+d);
}
int main()
{
    int a=1,b=2,c=3,d=4;
    cout<<"the sum of a,b is"<<add(a,b)<<endl;
    cout<<"the sum of a,b,c is"<<add(a,b,c)<<endl;
    cout<<"the sum of a,b,c,d is"<<add(a,b,c,d)<<endl;


}