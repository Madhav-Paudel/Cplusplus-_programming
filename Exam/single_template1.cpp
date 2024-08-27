// normal template example
#include<iostream>
using namespace std;
template <class T>
void adding(T a, T b)
{
    cout<<"the adding:"<<a+b<<endl;
}
int main()
{
    adding(5,10);
    adding(2.5,5.9);
    return 0;
}
