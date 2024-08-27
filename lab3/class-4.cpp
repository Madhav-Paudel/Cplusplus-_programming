// Design a class coordinate so that it can add two coordinates as (x1,y1)+(x2,y2)
#include<iostream>
using namespace std;
class coordinate
{
    private:
    int x1,x2;
    int y1,y2;
    int xtotal,ytotal;
    public:
    void inputting_value()
    {
        cout<<"enter the value of x1 points"<<endl;
        cin>>x1;
        cout<<"enter the value of x2 points"<<endl;
        cin>>x2;
        cout<<"enter the value of y1 points"<<endl;
        cin>>y1;
        cout<<"enter the value of y2 points"<<endl;
        cin>>y2;
    }
    void calculation_part()
    {
       cout<<"the value of two coordinates as (x1,y1)+(x2,y2):\n"<<endl;
       xtotal=x1+x2;
       ytotal=y1+y2;
       cout<<"(x1,y1)+(x2,y2):"<<xtotal<<":"<<ytotal<<endl;
    }
};
int main()
{
    coordinate data;
    cout<<"input the give values as questions"<<endl;
    data.inputting_value();
    data.calculation_part();
    return 0;
}