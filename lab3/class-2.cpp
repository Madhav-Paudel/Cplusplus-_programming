// Create a class named Student that has the following private data
// members: name, roll_number, and marks (an array of 5
// integers). Include member functions to:
// a)Set the student's details.
// b)Get the student's details.
// c)Calculate the average marks of the student.

#include<iostream>
using namespace std;
class Student
{
    private:
string name;
int roll_number,i;
float marks[5],total=0;
float average;
public:
void set_students()
{
    cout<<"enter the name student\n";
    cin>>name;
    cout<<"enter the Roll number of student"<<endl;
    cin>>roll_number;
    cout<<"give the marks of 5 subject\n";
    for(i=0;i<5;i++)
    {
        cout<<"enter the marks of student in"<<i+1<<"subject"<<endl;
        cin>>marks[i];
    }


}
void cal_part()
{
    for(i=0;i<5;i++)
    {
         total +=marks[i];
         average=total/5;
    }
    cout<<"average is\n";
    cout<<average<<endl;
}

};
int main()
{
    Student getdata;
    cout<<"enter the student info here\n";
    getdata.set_students();
    cout<<"the output of the data is\n";
    getdata.cal_part();
}