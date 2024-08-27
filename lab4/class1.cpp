// WAP to find the
// largest among three numbers using the default constructor where a method checkLarge
// returns the largest number which is displayed by displayLarge.

#include<iostream>
using namespace std;
class checkLarge{
    private:
    int a,b;
    public:
    checkLarge()
    {
    cout<<"This calculate the largest in two number"<<endl;
    cout<<"enter first number:"<<endl;
    cin>>a;
    cout<<"enter second number:"<<endl;
    cin>>b;
    }
    displayLarge()
    {
        if(a<b)
        {
            cout<<b<<" Is largest number"<<endl;

        }
        else
        {
            cout<<a<<" Is largest number"<<endl;
        }
    }

};
int main()
{
   
    checkLarge display;
    display.displayLarge();
}
