#include<iostream>
using namespace std;
class time{
private:
int hr,min,sec;
public:
time()
{
    hr=min=sec=0;
}
time(int hr,int min,int sec)
{
    this->hr=hr;
    this->min=min;
    this->sec=sec;

}
// pre increment
void operator ++()
{
    ++sec;
    min=min+sec/60;
    sec=sec%60;
    hr=hr+min/60;
    min=min%60;

}
// post increment
void operator++(int)
{
    sec++;
      min=min+sec/60;
    sec=sec%60;
    hr=hr+min/60;
    min=min%60;
}
void output()
{
    cout<<hr<<":"<<min<<":"<<sec<<endl;
}

};
int main()
{
    time obj1(4,58,59);
    time obj2(5,59,59);
    ++obj1;
    ++obj2;
    obj1.output();
    obj2.output();
    cout<<"post increment"<<endl;
    time obj3(4,58,59);
    time obj4(5,59,59);
    obj3++;
    obj4++;
    obj3.output();
    obj4.output();
}