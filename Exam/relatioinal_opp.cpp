// relation operator overloading
#include<iostream>
using namespace std;
class comp 
{
    private:
    int a;
    public:
    void getdata()
    {
        cout<<"The number:="<<endl;
        cin>>a;
    }
    bool operator <(comp i)
    {
        if(a<i.a)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
};
int main()
{
    comp obj1,obj2;
    obj1.getdata();
    obj2.getdata();
    if(obj1<obj2)
    {
        cout<<"obj1 is smaller";
    }
    else 
    {
        cout<<"obj2 is smaller";
    }
    return 0;
}