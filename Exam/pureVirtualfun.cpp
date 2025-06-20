// pure virtual function 
#include <iostream>
using namespace std;
class base
{
    public:
    virtual void show()=0;
};
class derv1: public base 
{
    public:
    void show()
    {
        cout<<"i am derv1 class"<<endl;
    }
};
class derv2: public base
{
    public:
    void show()
    {
        cout<<"i am derv2 class"<<endl;
    }
};

int main()
{
    derv1 dv1;
    derv2 dv2;
    base *ptr;
    ptr=&dv1;
    ptr->show();
     ptr=&dv2;
    ptr->show();

    return 0;
}