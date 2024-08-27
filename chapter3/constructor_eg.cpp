//def
#include<iostream>

using namespace std;
class test
{
    private:
    int a;
    char b;
public:
test()
// constructor
{
    a=0;
    b='#';
    cout<<"Constructor Executed!"<<endl;
}
void show()
{
    cout<<"a="<<a<<"b="<<b<<endl;
}
};

int main()
{
    cout<<"creating an object:"<<endl;
    test T1;
    cout<<"Object T1:"<<endl;
    T1.show();
    cout<<"Press Any Key...";
    cin.get();
    cout<<"Creating another Object"<<endl;
    test T2;
    cout<<"object T2:"<<endl;
    T2.show();
}