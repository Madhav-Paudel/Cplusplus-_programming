// example of virtual function 
#include <iostream>
using namespace std;
class mybase
{
    public:
    void show()
    {
        cout<<"base class show function called"<<endl;
    }
     virtual  void print()
    {
        cout<<"base class print function called"<<endl;
    }
};
class myderived : public mybase
{
     void show()
    {
        cout<<"derived class show function called"<<endl;
    }
    void print()
    {
        cout<<"derived class print function called"<<endl;
    }  
};
int main()
{
   mybase *baseptr;
   myderived derivedobj;
   baseptr=&derivedobj;
   baseptr->show();
   baseptr->print();
    return 0;
}