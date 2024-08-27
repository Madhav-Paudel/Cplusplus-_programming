// write to illustrate inheritance(one base and one derived class )
#include<iostream> 
using namespace std;
class base
{
    public:
    int a;
    int b;
    int c;
    base()
    {
        a=0;
        b=0;
        c=a+b;
        cout<<"this is in base class constructor"<<endl;
    }
    
    base(int a,int b)
    {
        this->a=a;
        this->b=b;
        c=a+b;
    }
    void display()
    {
        cout<<"this sum is "<<c<<endl;
    }
};
class derived: public base 
{
    public:
    derived()
    {
        cout<<"this is derived class constructor";

    }
    derived(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    void display1()
    {
        c=a-b;
        cout<<"The sub is "<<c<<endl;
    }
};
int main()
{
    derived obj;
    base obj1(5,1);
    obj1.display();
    derived obj2(5,2);
    obj2.display1();



    
}