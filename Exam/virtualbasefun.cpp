// virtual base
#include <iostream>
using namespace std;
class Parent
{
    protected:
    int basedata;
    public:
    Parent(int a)
    {
        basedata=a;
        
    }
    void showbasedata()
    {
        cout<<"The base data is "<<basedata<<endl;
    }
    
};
class Child1:virtual public Parent
{
    public:
    Child1(int a) : Parent(a) 
    {}

};
class Child2: virtual public Parent
{
    public:
    
    Child2(int a) : Parent(a)
    {}

};
class Grandchild:public Child1,public Child2
{
    public:
    Grandchild(int a) : Parent(a), Child1(a), Child2(a)
    {}
    int getdata()
    {
        return basedata;
    }
    
};

int main()
{
    

    Grandchild obj(10);
    cout<<"data:"<<obj.getdata()<<endl;
    obj.showbasedata();
    
}