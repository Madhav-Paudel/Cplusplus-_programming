// WAP to demonstrate the concept of pointer and array.
#include<iostream>
using namespace std;
int main()
{
    int a=400;
    int *p=&a;
    int **pi=&p;
    cout<<"accessing value from direct a:"<<a<<endl;
    cout<<"accessing value from (*p) a:"<<*p<<endl;
    cout<<"accessing value from (**pi) a:"<<**pi<<endl;

}
