// 2. WAP to illustrate Pure virtual function using inheritance
#include <iostream>
using namespace std;
class A
{
public:
virtual void show() = 0;//pure virtual function—equals to zero removes the function
};
class B : public A
{
public:
void show()
{
cout << "This is class B\n";
}
};
class C : public A
{
public:
void show()
{
cout << "This is class C\n";
}
};
int main(void)
{
A *list[2];
B b1;
C c1;
list[0] = &b1;
list[1] = &c1;
list[0]->show();
list[1]->show();
}