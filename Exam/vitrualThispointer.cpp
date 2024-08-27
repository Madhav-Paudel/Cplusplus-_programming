// this pointer in virtual
#include<iostream>
using namespace std;
class test 
{
    int a;
    public:
    void setdata(int x)
    {
        a=x;
        cout<<"Address of my obj is"<<this<<endl;
    }
    void showdata()
    {
        cout<<"data accessed normally:"<<a<<endl;
        cout<<"Address of object in showdata():"<<this<<endl;
        cout<<"this->a"<<this->a;
    }
    
};
int main()
{
    test myobj;
    myobj.setdata(20);
    myobj.showdata();
}