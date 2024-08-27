#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length,width;
    public:
    void input_data()
    {
        cout<<"enter length\n";
        cin>>length;
        cout<<"enter width\n";
        cin>>width;

    }
    void calpart()
    {
        int area=length*width;
        cout<<"the area rectangle is "<<area<<endl;
    }

};
int main()
{
    rectangle data;
    cout<<"enter info here\n";
    data.input_data(); 
    cout<<"here is the output of\n";
    data.calpart();
}