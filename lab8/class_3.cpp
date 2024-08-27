// WAP to illustrate base and derive class constructor
#include<iostream>
using namespace std;
class base
{
    public:
    int id;
    string name;
    float salary;
    base()
    {

    }
}; // namespace std;
class derived: public base
{
    public:
    derived(int id,string name,float marks)
    {
        this->id=id;
        this->name=name;
        salary=marks;
    }
    void display()
    {
        cout<<"the worker id :"<<id<<endl;
        cout<<"the worker name :"<<name<<endl;
        cout<<"the salary :"<<salary<<endl;

    }
};
int main()
{
    derived obj( 12,"madhav",12.12);
    obj.display();
    }