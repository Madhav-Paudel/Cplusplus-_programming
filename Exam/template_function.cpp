// template function 
#include<iostream>
using namespace std;
template <class T>
T add(T a,T b)
{
   return a+b;
}
int main()
{
    cout<<"the sum is "<<add(5,9)<<endl;
    cout<<"the sum is "<<add(5.23,5.23);
}