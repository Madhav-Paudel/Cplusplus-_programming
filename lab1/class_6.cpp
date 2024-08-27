// Write a C++ program to reverse a given number.
#include<iostream>
using namespace std;
int main()
{
    int num,digit,rev=0;
    cout<<"enter number for reverse\n";
    cin>>num;
    while(num!=0)
    {
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    cout<<"reverse number is "<<rev;
    
}
