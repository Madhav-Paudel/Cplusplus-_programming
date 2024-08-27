#include<iostream>
using namespace std;
class coordinate{
    private:
    int x;
    int y;
    public:
    void datain()
    {
        cout<<"enter the value of x "<<endl;
        cin>>x;
        cout<<"enter the value of y "<<endl;
        cin>>y;

    }
    void dataout()
    {
        cout<<"the value of x "<<x<<endl;
        cout<<"the value of y "<<y<<endl;
    }
    void add(coordinate p1,coordinate p2)
    {
        x=p1.x+p2.x;
        y=p2.y+p2.y;
    }

};
int main()
{
    
coordinate p1,p2,p3;
cout<<"Enter co-ordinates of 1st point:"<<endl;
p1.datain();
cout<<"Enter co-ordinate of points p2 :"<<endl;
p2.datain();
cout<<"P1= ";
p1.dataout();
cout<<"P2= ";
p2.dataout();
p3.add(p1,p2);
cout<<"P3(P1+P2)= ";
p3.dataout();
}


