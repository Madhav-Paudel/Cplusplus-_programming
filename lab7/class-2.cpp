//  Data Conversion 
// 2. User defined to basic type
#include<iostream>
using namespace std;
class Length
{

private:
int m;
int cm;

public:

Length()
{ m=0; cm=0; }
Length(int a,int b)
{ m=a; cm=b; }
operator float() // overloading float
{

float l;
l=m+cm/100.0;
return l;

}
void showLength()
{

cout<<m<<" meter "<<cm<<" cm"<<endl;

}
};
int main()
{
Length L1(100,505);
float L2;
L2=L1;//convert from user
//defined to basic
cout<<"Input Length:";
L1.showLength();
cout<<"Converted to Basic :";
cout<<L2;
}