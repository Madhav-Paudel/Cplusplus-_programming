// WAP to illustrate simple example using try, catch and throw of exception handling.
#include<iostream>
using namespace std;
int main()
{
    int neo,deo,result;
    cout<<"enter neo and deo"<<endl;
    cin>>neo>>deo;
    try
    {
        if(deo==0)
        {
            throw deo;
        }
        result=neo/deo;
        cout<<"division is :"<<result<<endl;
    }
    catch(int ex)
    {
       cout<<"this is not possible "<<ex<<endl; 
    }
    
    
}