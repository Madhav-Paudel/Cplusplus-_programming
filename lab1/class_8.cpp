// Write a C++ program to check whether a given year is leap year or not
#include<iostream>
using namespace std;
int main()
{
int year;
cout<<"enter the year to check leap year\n";
cin>>year;
if(year%400==0 || year%4==0 && year%100!=0)
{
cout<<year<<"the year is leap year\n";

}
else
{
    cout<<year<<"the year is not a leap year\n";

}

return 0;

}