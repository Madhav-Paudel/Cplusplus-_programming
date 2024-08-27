// WAP for multiple inheritance in constructor 
#include<iostream>
using namespace std;
class A
{
public:
int id;
A()
{
    cout<<"constructor in base class A"<<endl;
}
A(int id)
{
    this->id=id;
}
};
class B
{
    public:
    string name;
    B()
    {
        cout<<"constructor in second  base class B"<<endl;
    }
    B(string name)
    {
        this->name=name;

    }
};
class C:public A,public B
{
    public:
    C(int a, string b):A(a),B(b)
    {
        id=a;
        name=b;
    }
    void display()
    {
        cout<<"the id is:"<<id<<endl;
        cout<<"the name is :"<<name<<endl;
    }
};
int main()
{
    C obj(12,"madhav");
    obj.display();
}