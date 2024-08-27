// Design a class time so that it perform
// following task as: (hr1,min1,sec1)+(hr2,min2,sec2) and display the appropriate
// result by using:
// Object
// passing by value
#include<iostream>
using namespace std;

class Time {
private:
    int hr1, min1, sec1;
    int hr2, min2, sec2;
    int totalhr, totalmin, totalsec;

public:
    void getting_input1() {
        cout << "Enter the hour1: ";
        cin >> hr1;
        cout << "Enter the minutes1: ";
        cin >> min1;
        cout << "Enter the seconds1: ";
        cin >> sec1;
    }

    void getting_input2() {
        cout << "Enter the hour2: ";
        cin >> hr2;
        cout << "Enter the minutes2: ";
        cin >> min2;
        cout << "Enter the seconds2: ";
        cin >> sec2;
    }

    void calculation_part() {
        totalsec = sec1 + sec2;
        int carry_sec = totalsec / 60;
        totalsec = totalsec % 60;
        totalmin = min1 + min2 + carry_sec;
        int carry_min = totalmin / 60;
        totalmin = totalmin % 60;
        totalhr = hr1 + hr2 + carry_min;
        cout << "Total time: " << totalhr << ":" << totalmin << ":" << totalsec << endl;
    }
};

int main() {
    Time timeObj;
    timeObj.getting_input1();
    timeObj.getting_input2();
    timeObj.calculation_part();

    return 0;
}