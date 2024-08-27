// string cocatenation using binary operator 
// 2. Concatenating string objects->s1+s2
#include<iostream>
#include<string.h>

using namespace std;
class comb
{
    private:
    char name[65];
    public:
    void getdata()
    {
        cout<<"enter the name:";
        cin>>name;
    }
    comb operator +(comb i)
    {
        comb temp;
        strcpy(temp.name,name);
        strcat(temp.name,i.name);
        return temp;
    }
    void display()
    {
        cout<<"The combine name is: "<<name<<endl; 
    }
};
int main()
{
    comb obj1,obj2,obj3;
    obj1.getdata();
    obj2.getdata();
    obj3=obj1+obj2;
    obj3.display();
    return 0;
}