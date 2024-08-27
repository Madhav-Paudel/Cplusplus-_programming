//  WAP to find the largest among three numbers using a
// parametrized constructor.
#include<iostream>
using namespace std;
class largest{
private:
int a,b,c;
public:
largest(int x,int y,int z)
{
    a=x;
    b=y;
    c=z;
}
void compare_display()
{
    if(a>b && a>c)
    {
        cout<<a<<" is largest";
    }
    else if (b>a && b>c)
    {
        cout<<b<<" is largest";
    }
    else
    {
        cout<<c<<" is largest";
    }
}
};
int main()
{
    largest obj(5,10,3);
    obj.compare_display();
}
