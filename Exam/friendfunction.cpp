// friend function example
#include <iostream>
using namespace std;
class tesing{
private:
    int a;
    int b;
 public:
 tesing()
 {
     a=5;
     b=3;
 }
  friend int functionnam(tesing &d);
  
};
int functionnam(tesing &d){
    int c=d.a+d.b;
    return c;
}

int main()
{
    tesing obj;
    cout<<"the number is "<<functionnam(obj);


    return 0;
}
