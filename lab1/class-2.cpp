#include<iostream>
#define PI 3.14
using namespace std;
int main()
{
    double area_of_circle,circumference_of_circle,area_of_rectangle,perimeter_of_rectangle,area_of_square,perimeter_of_square,r,l,b;
    cout<<"enter the radius of circle\n";
    cin>>r;
    cout<<"enter the length\n";
    cin>>l;
    cout<<"enter the breadth\n";
    cin>>b;
    area_of_circle=PI*r*r;
    circumference_of_circle=2*PI*r;
    area_of_rectangle=l*b;
    perimeter_of_rectangle=2*(l+b);
    area_of_square=l*l;
    perimeter_of_square=4*l;


    cout<<"the area of circle is"<<area_of_circle<<"\n";
    cout<<"the circumference of circle is"<<circumference_of_circle<<"\n";
    cout<<"the area of rectangle is "<<area_of_rectangle<<"\n";
    cout<<"the perimeter of rectangle is "<<perimeter_of_rectangle<<"\n";
 cout<<"the area of square is "<<area_of_square<<"\n";
 cout<<"the perimeter of square is "<<perimeter_of_square<<"\n";
return 0;
}