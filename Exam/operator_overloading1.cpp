// sum using operator overloading using binary operator.
// example of binary operator 
#include<iostream>
using namespace std;
class Test
{
    private:
    int test1;
    int test2;
    public:
    Test()
    {
        test1=0;
        test2=0;
    }
    Test(int t1,int t2)
    {
        test1=t1;
        test2=t2;
    }
    Test operator +(Test t)
    {
        Test temp;
        temp.test1=test1+t.test1;
        temp.test2=test2+t.test2;
        return temp;
    }
    void display()
    {
        cout<<"The marks of test1:"<<test1<<endl;
        cout<<"The marks of test2:"<<test2<<endl;
        
    }
    
};
int main()
{
    Test obj1(5,2),obj2(1,2);
    Test obj3=obj1+obj2;
    obj3.display();
}