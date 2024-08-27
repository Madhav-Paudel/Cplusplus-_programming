// 4. WAP to illustrate  virtual base class
#include <iostream>
using namespace std;
class base
{
protected:
int data=35;
};
class derv1 : public virtual base
{
};
class derv2 : public virtual base
{
};
class derv3 : public derv1, public derv2
{
public:
int read()

{
return data; //member is ambiguous
}
};
int main(void)
{
derv3 d;
int retdata = d.read();
cout << "The returned data is: " << retdata << endl;
}