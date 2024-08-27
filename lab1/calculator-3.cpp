//to calculate addition,subtraction,multiplication,division
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char choice;
    double add,sub,mul,div;
    int first_num,second_num;
    cout<<"enter 'a' for addition\n 's' for subtraction 'm'\n for multiplication\n  'd' for division\n";
    cin>>choice;
 cout<<"enter first number\n";
 cin>>first_num;
 cout<<"enter second number\n";
 cin>>second_num;
 switch (choice)
 {
 case'a':
    add=first_num+second_num;
cout<<"the addition is"<<add<<"\n";
    break;
 case's':
 sub=first_num+second_num;
 cout<<"the subtraction is  "<<sub<<"\n";
 break;
 case'm':
 mul=first_num*second_num;
cout<<"the multiplication is  "<<mul<<"\n";
 break;
 case'd':
div=first_num/second_num;
cout<<"the  is division"<<fixed<<setprecision(3)<<div<<"\n";
 break;
 default:
 cout<<"error\n";
    break;
 }
 

}