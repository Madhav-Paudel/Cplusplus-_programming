#include<iostream>
using namespace std;
class studentdata
{
    private:
 int roll;
 char name[10];
 float a;
 public:
  void dataread()
 {
    cout<<"enter your roll number\n";
    cin>>roll;
    cout<<"enter your name\n";
    cin>>name;
    cout<<"enter your cgpa\n";
    cin>>a;
 }
void dataout();
};
void studentdata::dataout()
{
  cout<<" roll number:\n";
    cout<<roll<<endl;
    cout<<"enter name:\n";
    cout<<name<<endl;
    cout<<"total cgpa:\n";
    cout<<a<<endl;
}
int main()
{
    studentdata getting;
    cout<<"enter your info here:\n";
    getting.dataread();
    cout<<"filled data are:\n";
    getting.dataout();
}