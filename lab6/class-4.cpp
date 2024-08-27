// overloading inserting(<<) and extraction (>>) operator
#include <iostream>
#include <string>
using namespace std;

class person {
private:
    string name;
    int age;

public:
    person() 
   {name=" ";
       age=0;
   }

    friend ostream &operator<<(ostream &output, const person &p);
    friend istream &operator>>(istream &input, person &p);
};

ostream &operator<<(ostream &output, const person &p) {
    output << "Hello," << endl;
    output << "My name is " << p.name << " and my age is " << p.age << endl;
    return output;
}

istream &operator>>(istream &input, person &p) {
    cout << "Enter your name: ";
    input >> p.name;
    cout << "Enter your age: ";
    input >> p.age;
    return input;
}

int main() {
    person obj;
    cin >> obj;
    cout << obj;
    return 0;
}
