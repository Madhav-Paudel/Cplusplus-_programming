// . WAP to illustrate class template
#include<iostream>
using namespace std;
template<typename T>
class great
{
    private:
    T a;
    T b;
    public:
    T setdata(T a,T b)
    {
        this->a=a;
        this->b=b;
    }
    T getdata()
    {
        if(a<b)
        {
            return b;
        }
        else
        {
            return a;
        }
    }
};
int main()
{
    great<int> obj1;
    obj1.setdata(5,7);
    cout<<"greater number is "<<obj1.getdata()<<endl;
    great<float> obj2;
    obj2.setdata(2.5,5.9);
    cout<<"greater number is "<<obj2.getdata()<<endl;
}