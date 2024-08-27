#include<iostream>
using namespace std;
namespace first{
    int var=5;
    int value()
    {return var;} 

}
namespace second
{
    double var=3.1416;
    double value() {return 2*var;}
}
int main()
{
    cout<<"variable from first:"<<first::var<<endl;
    cout<<"value from first:"<<first::value()<<endl;
    cout<<"value from second:"<<second::value()<<endl;
    cout<<"variable from second:"<<second::var<<endl;


return 0;

}
