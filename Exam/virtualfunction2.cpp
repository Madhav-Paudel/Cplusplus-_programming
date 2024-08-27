#include <iostream>
using namespace std;
class Animal
{
    public:
   virtual void eat()
    {
       cout<<"i am eating generic food"<<endl; 
    }
};
class Cat : public Animal
{
  public:
  void eat()
  {
      cout<<"i am eating cat food"<<endl;
  }
};
class dog : public Animal
{
  public:
  void eat()
  {
      cout<<"i am eating dog food"<<endl;
  }
};
void function1(Animal *xyz)
{
    xyz->eat();
}
int main()
{
    Animal *ptr;
    Cat catobj;
    dog dogobj;
    ptr=&catobj;
    function1(ptr);
    ptr=&dogobj;
    function1(ptr);

    return 0;
}
