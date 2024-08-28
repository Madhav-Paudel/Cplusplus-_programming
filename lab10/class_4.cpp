// WAP to illustrate exception class.
#include<iostream>
#include<math.h>
using namespace std;
class Number
{

double num;
public:

class NEG{};
void readnum()
{

cout<<"Enter num:";
cin>>num;

}
double sqroot()
{

if(num<0)

throw NEG();

else

return sqrt(num);

}

};


int main()
{

Number n1;
double root;
n1.readnum();
try
{

cout<<"\nTrying to find squre root....."<<endl;
root = n1.sqroot();
cout<<"Square root is :"<<root<<endl;
cout<<"Success: No exception raised"<<endl;

}
catch(Number::NEG)
{

cout<<"\nSquare root of Negative no not possible.";

}

}