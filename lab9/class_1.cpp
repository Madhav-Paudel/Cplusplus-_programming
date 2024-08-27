// 1. WAP to illustrate Virtual function using inheritance.
#include <iostream>
using namespace std;
class base
{
public:
virtual void show() //this virtual property is inherited by all derived classes
{
cout << "This is base class\n";
}
};
class derv1 : public base
{
public:
void show()
{
cout << "This is derv1 class\n";
}
};
class derv2 : public base
{ 
public:
void show()
{
cout << "This is derv2 class\n";
}
};
int main(void)
{
base *ptr; //class pointer—may point to the address of class objects
derv1 d1;
derv2 d2;
ptr = &d1; //ptr is assigned with an address of an object d1
ptr->show();
ptr = &d2; //ptr is assigned with an address of an object d2
ptr->show();
}