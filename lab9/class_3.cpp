// 3. WAP to illustrate virtual destructor
#include <iostream>
using namespace std;
class base
{
public:
~base()
{
cout << "This is base destructor" << endl;
}
};
class derived : public base
{
public:
~derived()
{
cout << "This is derived destructor" << endl;
}
};
int main(void)
{
base *ptr = new derived();
delete ptr;
}
