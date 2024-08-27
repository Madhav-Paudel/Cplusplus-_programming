// Write a program to add two objects of class Complex having data members real and
// imaginary.

#include <iostream>
using namespace std;
class Complex
{
    private:
    int a;
    string n;
    public:
    void real()
    {
        cout<<"enter the real data:";
        cin>>a;
        
        
    }
    void imaginary()
    {
        cout<<"enter the imaginary data:";
        cin>>n;
       
    }
    void calculation()
    {
        cout<<"the sum is:"<<endl;
        cout<<a<<"+"<<n;
    }
    
};

int main()
{
    Complex data;
    
    cout<<"this program will add the real and imaginary number:"<<endl;
    data.real();
    data.imaginary();
    data.calculation();
    

    return 0;
}