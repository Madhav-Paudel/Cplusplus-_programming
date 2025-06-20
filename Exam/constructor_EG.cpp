// example of default,paramaterize and copy constructor
#include <iostream>
using namespace std;
class testing{
  private:
  int a,b;
  public:
  testing(){
      cout<<"This is default construction!!"<<endl;
      a=0;
      b=0;
      cout<<"The value of a:"<<a<<" and b:"<<b<<endl;
  }
  testing(int a,int b)
  {
      
      cout<<"This is Paramaterize  construction!!"<<endl; 
      this->a=a;
      this->b=b;
  }
    testing(testing &obj)
     {
         cout<<"This is copy construction!!"<<endl;
         a=obj.a;
         b=obj.b;
     }
     void calculation()
     {
         int c=a+b;
         cout<<"The sum is "<<c<<endl;
         
     }
};

int main()
{
testing obj1;
testing obj2(10,20);
obj2.calculation();
testing obj3(obj2);
obj3.calculation();
    return 0;
}