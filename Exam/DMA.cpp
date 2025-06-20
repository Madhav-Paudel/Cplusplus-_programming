#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter the size of the array"<<endl;
    cin>>size;
    int *ptr=new int[size];
    for(int i=0;i<size;i++)
    {
        cout<<"enter the "<<i<<" array"<<endl;
        cin>>ptr[i];
    }
    cout<<"The number you enter are "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"\nthe entered "<<i<<" array"<<endl;
        cout<<ptr[i];
    }
    delete(ptr);
}



/*
#include<iostream>
using namespace std;
class test1
{
    private:
    int size;
    public:
        int *ptr=new int[size];
    void getdata()
    {
        cout<<"enter the size of array"<<endl;
    cin>>size;

        for(int i=0;i<size;i++)
        {
            cout<<"enter "<<i+1<<" data"<<endl;
            cin>>ptr[i];
        }
    }
    void display()
    {
        cout<<"The data you enter are "<<endl;
        for(int i=0;i<size;i++)
        {
            cout<<ptr[i]<<endl;
            
        }
    }
};
int main()
{
    test1 obj1;
    obj1.getdata();
    obj1.display();
}*/