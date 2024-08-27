#include<iostream>
using namespace std;
class test
{
  private:
  int o;
  public:
  test()
  {
      o=100;
  }
  void operator ++()
  {
      o=o+5;
  }
  void display()
  {
      cout<<"the addition is "<<o;
  }
  
};
int main()
{
    test obj;
    ++obj;
    obj.display();
}