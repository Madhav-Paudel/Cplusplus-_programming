
#include <iostream>
using namespace std;
class Height
{
    private:
    int m;
    int cm;
    public:
    Height()
    {
        m=0;
        cm=0;
    }
    Height(int m,int cm)
    {
    adjusting();
        
    }
  void adjusting()
  {
      m=m+cm/100;
      cm=cm%100;
  }
friend Height operator+(Height &h1, Height &h2);
      void display()
    {
        cout<<"m:cm"<<m<<":"<<cm;
    }
};
Height operator+(Height &h1, Height &                                                                   h2)
{
    int newMeter = h1.m + h2.m;
    int newCentimeter = h1.cm + h2.cm;
      Height result(newMeter, newCentimeter);
      {    result.adjusting(); // Normalize the result
    return result;}

}

int main()
{
   Height obj,obj1(2,50);
   obj.display();
   Height obj2(3,75);
   Height obj3=obj1+obj2;
   obj3.display();
}