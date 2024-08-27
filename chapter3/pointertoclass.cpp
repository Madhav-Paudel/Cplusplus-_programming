#include<iostream>
using namespace std;
class Rectangle 
{
    int width,height;
    public:
    Rectangle(int x,int y):width(x),height(y){}
    int area()
    {
        return width*height;
    }
};
int main()
{
    Rectangle R1(3,4);
    Rectangle *ptr1,*ptr2,*ptr3;//pointer to object
    ptr1=&R1;
    ptr2=new Rectangle(5,6);
    ptr3=new Rectangle[2]{{2,3},{3,6}};
    cout<<"R1's area:"<<R1.area()<<endl;
    cout<<"*ptr1's area:"<<ptr1->area()<<endl;
    cout<<"*ptr2's area:"<<ptr2->area()<<endl;
cout<<"ptr3[0]'s area:"<<ptr3[0].area()<<endl;
cout<<"ptr3[1]'s area:"<<ptr3[1].area()<<endl;
delete ptr2;
delete[] ptr3;

}