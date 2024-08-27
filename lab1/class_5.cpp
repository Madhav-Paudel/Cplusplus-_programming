//  Write a C++ program to check whether a number is even or odd. 
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the number\n";
    cin>>num;
    if(num%2==0)
{
    cout<<"the enter number is even\t"<<num;
}
else
{
    cout<<"the enter number is odd\t"<<num;

}

return 0;
}