// some of lectures are paid in period basic,while other are paid in month basic.
// create a class called lecture that store Id and name of lectures.from this class derive two classes:part time,which adds
// payperhr(type float):full time which adds paypemont (type float).each of these three classes should have a readdata() function
// function to get data from user at the keyboard and printdata() function to display the data.write a main() program to test the 
// Full time and part time, classes by creating instance of them asking the user to fill their data with readdata() and display
// the data with printdata()
#include<iostream>
using namespace std;
class lecture{
  public:
  int ID;
  string name_of_lectures;

};
// derived class for part_time
class part_time : public lecture{
    public:
    float payPerHour;
    void tecReadData()
    {
  
      cout<<"enter the ID of part time lecture"<<endl;
      cin>>ID;
      cout<<"enter the name of lectures"<<endl;
      cin>>name_of_lectures;
  
    }
    void readdata()
    {
        cout<<"enter the per hours payment for part time teacher"<<endl;
        cin>>payPerHour;
    }
    void tecPrintData()
    {
  
      cout<<"the ID of part time lecture is "<<ID<<endl;
      cout<<"the name of lectures is "<<name_of_lectures<<endl;
  
    }
    void PrintData()
    {
        cout<<"the part time lecture is "<<payPerHour<<endl;
    }
    
    
};

// derived class for full_time

class full_time: public lecture{
    public:
    float payPerMonth;
      void tecReadData()
    {
  
      cout<<"enter the ID of part time lecture"<<endl;
      cin>>ID;
      cout<<"enter the name of lectures"<<endl;
      cin>>name_of_lectures;
  
    }
    void readdata()
    {
        cout<<"enter the per month payment for full time teacher"<<endl;
        cin>>payPerMonth;
    }
    void tecPrintData()
    {
  
      cout<<"the ID of full time lecture is "<<ID<<endl;
      cout<<"the name of lectures is "<<name_of_lectures<<endl;
  
    }
    void PrintData()
    {
        cout<<"the full  time lecture is "<<payPerMonth<<endl;
    }
    

};


int main()
{
    lecture data;
    full_time data2;
    part_time data1;
    data1.tecReadData();
    data1.readdata();
    data1.tecPrintData();
    data1.PrintData();
// -----------------------------------------------------------////
    data2.tecReadData();
    data2.readdata();
    data2.tecPrintData();
    data2.PrintData();

  
   
}