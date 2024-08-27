// WAP for multiple inheritance
#include<iostream>
using namespace std;
class first
{
    public:

    void display()
    {
        cout<<"this is first base class!"<<endl;
    }
};
class second
{
    public:
    void display1()
    {
        cout<<"this is second base class!"<<endl;

    }
};
class third:public first,public second
{
    public:



};
int main()
{
    third obj;
    obj.display();
    obj.display1();
}