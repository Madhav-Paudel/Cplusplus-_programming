// overloading relational operator(>)
#include<iostream>
using namespace std;
class money
{
private:

int rs; float ps;

public:

money()
{rs=0;
ps=0.0;
} 
money(int r,float p) {

rs=r; ps=p;

}
void show()
{
cout<<"Rs. : "<<rs<<" Ps. "<<ps<<endl;
}
bool operator>(money); 

}; 
bool money::operator>(money m2)
{

float mm1=rs+ps/100;
float mm2 = m2.rs+m2.ps/100;
return(mm1>mm2)?true:false;

}
int main()
{

money m1(20,55);
money m2(15,90);
cout<<"Amount 1:";m1.show();
cout<<"Amount 2:";m2.show();
money m3;
if(m1>m2)
m3=m1;
else m3=m2;
cout<<"Greator Amount is:";
m3.show();

}