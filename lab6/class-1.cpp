// binary operator overloading x1+x2=x,y1+y2=y
#include<iostream>
using namespace std;
class Point
{
private:
int x,y;
public:
Point()
{}
Point(int a, int b)
{
    x=a; 
    y=b; 

    }
void get()
{

cout<<"Enter x coordinate:"<<endl;
cin>>x;
cout<<"Enter y coordinate:"<<endl; 
cin>>y;

}
Point addPoint(Point p2)
{

Point sum;
sum.x=x+p2.x;
sum.y=y+p2.y;
return sum;

}
void put()
{

cout<<" (x,y) =("<<x<<","<<y<<")"<<endl;

}
};
int main()
{
Point p1,p2;
cout<<"Enter co-ordinate of p1:"<<endl;
p1.get();
cout<<"Enter p2:"<<endl;
p2.get();
Point p3;
p3= p1.addPoint(p2);
cout<<endl<<"p1=";
 p1.put();
cout<<endl<<"p2=" ; 
p2.put();
cout<<endl<<"Sum p3="; 
p3.put();
return 0;
}