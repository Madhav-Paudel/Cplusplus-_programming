#include<iostream>
using namespace std;
class myclass
{
private:
    int i;
    float f;
    char c;
public:
  void getdata()
  {
    cout<<"input an int,float and char";
    cin>>f>>f>>c;
  }
  void showdata()
  {
    cout<<"int="<<i<<endl;
    cout<<"float num="<<f<<endl;
    cout<<"char ="<<c<<endl;
  }
 };
 int main()
 {
    myclass obj1,obj2;
   cout<<"input object1:";
        obj1.getdata();
   cout<<"input object2:";
    obj2.getdata();
    cout<<"object 1:"<<endl;
   obj1.showdata();
    cout<<"object 2:"<<endl;
    obj2.showdata();
 return 0;
}

