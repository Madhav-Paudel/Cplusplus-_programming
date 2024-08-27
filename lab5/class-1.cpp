// WAP to increment the Time object of class Time
// with data member hour, min and sec by 1 second using operator overloading for
// increment ++ in pre-increment and post increment form. Display the value of
// time before and after increment. 
#include<iostream>
using namespace std;
class time
{
    private:
    int hr,min,sec;
    public:
    time()
    {
        hr=0;
        min=0;
        sec=0;
    }
    time(int hr,int min,int sec)
    {
        this->hr=hr;
        this->min=min;.
        
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
    void operator ++(int)
    { sec++;
        min=min+sec/60;
        sec=sec%60;
        hr=hr+min/60;
        min=min%60;

    }
    void outputData()
    {
        cout<<"The output is"<<endl;
        cout<<"hr:"<<hr<<":min:"<<min<<":sec:"<<sec<<endl;
    }

};
int main()
{
    time t1(3, 56, 55);
    time t2(4, 58, 59);
    time t3(5, 59, 59);
    ++t1;
    ++t2;
    ++t3;
    t1.outputData();
    t2.outputData();
    t3.outputData();
    cout<<"postincrement";
    t1++;
    t2++;
    t3++;
    t1.outputData();
    t2.outputData();
    t3.outputData();

    return 0;
}