// exception handeling by try catch and throw
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
    }
    catch(int ex)
    {
       cout<<"this is not possible "<<ex<<endl; 
    }
    cout<<"division is :"<<result<<endl;
    
}