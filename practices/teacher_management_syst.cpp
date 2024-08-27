#include<iostream>
using namespace std;
class Teacher{
    private:
    string name;
    string dep;
    string subject;
    double salary;
    int Tid;
    public:
    void getdata()
    {
        cout<<"enter the name of teacher\n";
        cin>>name;
        cout<<"enter the department of teacher\n";
        cin>>dep;
        cout<<"enter the subject  of teacher\n";
        cin>>subject;
        cout<<"enter the s of teacher\n";
        cin>>name;
    }
    void student();

};
void Teacher::student()
{
    cout<<"hello";
}
int main()
{
    Teacher t1;
    t1.student();
}