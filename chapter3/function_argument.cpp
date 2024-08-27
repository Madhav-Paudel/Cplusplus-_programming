#include<iostream>
using namespace std;
class time
{
    private:
  int hrs,min;
  public:
  void gettime(int h,int m)
  { hrs=h;
  min=m;
  }

void puttime()
{
    cout<<hrs<<":"<<min;
}
void sum(time,time);
};
void time::sum(time t1,time t2)
{
    min=t1.min+t2.min;
    hrs=min/60;
    min=min%60;
    hrs+=t1.hrs+t2.hrs;

}
int main()
{
    time t1,t2;
    t1.gettime(3,45);
    t2.gettime(2,48);
    time t3;
    t3.sum(t1,t2);
    t1.puttime();
    cout<<"+";
    t2.puttime();
    cout<<"=";
     t3.puttime();


}