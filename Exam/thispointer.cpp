#include <iostream>
using namespace std;
class Student{
    private:
    string name;
    int id;
    public:
    Student(string name,int id)
    {
        this->name=name;
        this->id=id;
    }
    void print()
    {
        cout<<"The given name is "<<name<<endl;
        cout<<"The given id is "<<id<<endl;
    }
};

int main()
{
    Student obj1("madhav",12);
    obj1.print();
    return 0;
}