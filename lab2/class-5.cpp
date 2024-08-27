// 5. WAP to demonstrate the concept of namespace and using namespace directive.
#include<iostream>
using std::cout;
namespace nameprint{
    void printing__message()
    {
        cout<<"i am madhav paudel\n";
    }
}   
int main()
{
    int a;
    cout<<"enter any number\n";
    std::cin>>a;
    cout<<"the number is "<<a<<"\n";
    nameprint::printing__message();
}
