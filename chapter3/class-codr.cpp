#include<iostream>
using namespace std;
class coordinate{
    private:
    int x;
    int y;
    public:
    void read()
    {
        cout<<"x coordinate:";
        cin>>x;
        cout<<"y coordinate:";
        cin>>y;

    }
    void print()
    {
        cout<<"("<<x<<","<<y<<")"<<endl;

    }
    void add(coordinate p1,coordinate p2)
    {
        x=p1.x+p2.x;
        y=p1.y+p2.y;

    }
};
int main()
{
    coordinate p1,p2,p3;
    cout<<"enter co-orddinates of 1sr point:"<<endl;
    p1.read();
    cout<<"enter co-ordinate of points p2:"<<endl;
    p2.read();
    cout<<"P2= ";
    p2.print();
    p3.add(p1,p2);
    cout<<"p3(p1+p2)=";
    p3.print();
}