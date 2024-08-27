#include<iostream>
using namespace std;
int main()
{
    int a;
    int *aptr;
    a=7;
    aptr=&a;
    cout<<"the address of a is"<<&a<<endl;
    cout<<"the value of aptr is"<<aptr<<endl;
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of *aptr is"<<*aptr<<endl;
    cout<<"showing that * and & are inverse of each other."<<endl;
    cout<<"&aptr="<<&*aptr<<endl<<"*&aptr="<<*&aptr;
     



     
}            