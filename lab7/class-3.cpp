// User-Defined Type to User-Defined Type
// i. Conversion routine in source object
#include<iostream>
#define PI 3.14159
using namespace std;

class Radian {
private:
    float rad;

public:
    Radian() 
    {rad=0.0; }
    Radian(float r) 
      {
        rad=r;
        }

    float getRadian() {
        return rad;
    }

    void display() {
        cout << "Radian = " << getRadian() << endl;
    }
};

class Degree {
private:
    float degree;

public:
    Degree()
    {
        degree=0.0;
     }

    // Conversion operator: Degree to Radian
    operator Radian() {
        float radian = degree * PI / 180.0;
        return Radian(radian);
    }

    void input() {
        cout << "Enter degree: ";
        cin >> degree;
    }
};

int main() {
    Degree d1;
    Radian r1;
    
    // Input degree
    d1.input();
    
    // Convert degree to radian
    r1 = d1; // Uses conversion operator

    // Display the result
    r1.display();

    return 0;
}
