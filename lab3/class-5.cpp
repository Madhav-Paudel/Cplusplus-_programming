// Design a class so that it can incorporate nested member function.
#include<iostream>
using namespace std;
class largest_number
{
    private:
    int a,b,c;
    public:
    void inputting_data();
    void calculation();

};
void largest_number::inputting_data()
{
    cout<<"enter first number"<<endl;
    cin>>a;
    cout<<"enter second number"<<endl;
    cin>>b;
    cout<<"enter third number"<<endl;
    cin>>c;
}
void largest_number::calculation()
{
    if (a>b && a>c)
    {
        cout<<a<<" is largest"<<endl;
    } 
    else if(b>a && b>c)
    {
         cout<<b<<"is largest"<<endl;
       
    }
    else
    {
   cout<<c<<" is largest"<<endl;

     }

    
}
int main()
{
    largest_number intering;
    cout<<"enter the data as per given"<<endl;
    intering.inputting_data();
    cout<<"the data is"<<endl;
    intering.calculation();
    return 0;


}