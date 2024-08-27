// Design a class time so that it perform
// following task as: (hr1,min1,sec1)+(hr2,min2,sec2) and display the appropriate
// result by using: Object
// passing by reference
#include<iostream>
using namespace std;

class Time {
private:
    int hr1, min1, sec1;
    int hr2, min2, sec2;
    int totalhr, totalmin, totalsec;

public:
    void getting_input1(int& hr, int& min, int& sec) {
        cout << "Enter the hour1: ";
        cin >> hr;
        cout << "Enter the minutes1: ";
        cin >> min;
        cout << "Enter the seconds1: ";
        cin >> sec;
    }

    void getting_input2(int& hr, int& min, int& sec) {
        cout << "Enter the hour2: ";
        cin >> hr;
        cout << "Enter the minutes2: ";
        cin >> min;
        cout << "Enter the seconds2: ";
        cin >> sec;
    }

    void calculation_part(int& hr1, int& min1, int& sec1, int& hr2, int& min2, int& sec2) {
        // Calculate total seconds
        totalsec = sec1 + sec2;
        int carry_sec = totalsec / 60;
        totalsec = totalsec % 60;

        // Calculate total minutes
        totalmin = min1 + min2 + carry_sec;
        int carry_min = totalmin / 60;
        totalmin = totalmin % 60;

        // Calculate total hours
        totalhr = hr1 + hr2 + carry_min;
    }

    void display_result() {
        cout << "Total time: " << totalhr << ":" << totalmin << ":" << totalsec << endl;
    }
};

int main() {
    Time timeObj;
    int hr1, min1, sec1;
    int hr2, min2, sec2;

    timeObj.getting_input1(hr1, min1, sec1);
    timeObj.getting_input2(hr2, min2, sec2);
    timeObj.calculation_part(hr1, min1, sec1, hr2, min2, sec2);
    timeObj.display_result();

    return 0;
}
