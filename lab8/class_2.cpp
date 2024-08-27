// WAP to illustrate constructor in base class
#include<iostream>
using namespace  std;
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
    }
    base(int a,int b)
    {
        this->a=a;
        this->b=b;
        c=a+b;
    }
    // void display()
    // {
    //     cout<<"the sum is "
    // }

    
}; // namespace  std;
class derived: public base
{
public: 
derived(int a, int b) : base(a, b)
{
    
}

void display()
{
    cout<<"the sum is "<<c<<endl;
}

};
int main()
{
    derived obj(5,2);
    obj.display();
}