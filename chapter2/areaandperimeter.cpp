#include<iostream>
using namespace std;
int main() 
{
    int length,width,perimeter,area;
    cout<<"enter the length:\n";
    cin>>length;
    cout<<"enter the width:\n";
    cin>>width;
    area=length*width;
    perimeter=2*(length*width);
    cout<<"the perimeter is"<<perimeter<<"\n";
    cout<<"the area is"<<area<<"\n";
    return 0;

}