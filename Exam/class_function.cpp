// friend class example 
#include<iostream>
using namespace std;
class myclass1
{
    friend class myclass2;
    private:
    int x;
    public:
    myclass1(int a)
    {
        x=a;
    }
    
};
class myclass2
{
    public:
    void get(myclass1 obj)
    {
        cout<<" x value is :"<<obj.x<<endl;
    }
};
int main()
{
    myclass1 obj1(5);
    myclass2 obj2;
    obj2.get(obj1);
}