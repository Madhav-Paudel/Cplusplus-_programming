// inline is also same as function but it is very help for executing data fast 
// it is best for the short program .
// it does not function and work correctly in the long formate code
// we use the keyword (inline ) in the function parameter
#include<iostream>
using namespace std;
inline product(int a,int b)
{
    return a*b;
}
int main()
{
    int a;
    int b;
    cout<<"enter first number\n";
    cin>>a;
    cout<<"enter second number\n";
    cin>>b;
    cout<<"the product is "<<product(a,b)<<endl;
}
