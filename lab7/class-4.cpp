// 3. User defined to user defined


// Conversion routine in destination object
#include<iostream>
#define PI 3.14159
using namespace std;
class Degree
{

private:
float degree;
public:
Degree()
{
degree=0.0;
}
float getdegree()
{
return degree;
}
void input()
{
cout<<"Enter degree: ";
cin>>degree;
}
};
class Radian
{

private:
float rad;
public:
Radian()
{
rad=0.0;
}
float getradian()
{
return rad;
}
Radian(Degree deg)
{
rad=deg.getdegree()*PI/180.0;
}
void display()
{
cout<<"Radian ="<<getradian();
}
};
int main()
{

Degree d1;
Radian r1;
//d1 and r1 are objects of different types
d1.input();
r1=d1;
r1.display();

}