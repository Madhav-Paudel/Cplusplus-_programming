// WAP to calculate the area of a rectangle using a
// default constructor where the constructor and methods are defined outside the
// class.
#include<iostream>
using namespace std;
class rectArea{
    private:
    int length,breadth;
    public:
    int area;
    rectArea();
    void calculation()
    {
        area=length*breadth;
        cout<<"The area of rectangle is "<<area;
    }
    

};

rectArea::rectArea()
{
    cout<<"enter the length:"<<endl;
    cin>>length;
    cout<<"enter the breadth"<<endl;
    cin>>breadth;

}
int main()
{
    rectArea out;
    out.calculation();
}
