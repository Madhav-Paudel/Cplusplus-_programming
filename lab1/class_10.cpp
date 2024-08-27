 // . Write a C++ program to find the GCD of two numbers.
#include<iostream>
using namespace std;
int main()
{
    int num,num1,gcd;
   
    cout<<"enter first  number\n";
    cin>>num;
    cout<<"enter second number\n";
    cin>>num1;
    for(int i=1;i<=num && i<=num1;i++)
    {
        if(num%i==0 && num1%i==0)
        {
            gcd=i;
        }
    } 
    cout<<"the GCD is  "<<gcd;

}