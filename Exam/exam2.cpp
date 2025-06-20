#include<iostream>
using namespace std;
class objectcounter
{
    private:
    static int objcounter;
    public:
    objectcounter()
    {
        objcounter++;
    }
    static int getobjectcounter()
    {
        return objcounter;
    }
};
int objectcounter::objcounter=0;
int main()
{
    objectcounter obj1;
    objectcounter obj2;
    objectcounter obj3;
    objectcounter obj4;
    cout<<"the number of object are "<<objectcounter::getobjectcounter()<<endl;
    return 0;
}