// multiple template example 
#include<iostream>
using namespace std;
template <class t1,class t2>
// multiple ma class chai two wato line ani we can add different value so
void adding(t1 a,t2 b)
{
    cout<<"the sum is "<<a+b<<endl;
}

int main()
{
    adding(5,4);
    adding(3.4,8);
}