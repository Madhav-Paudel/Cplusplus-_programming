// Return by reference is use for assigning the number form user to the global variable 
#include<iostream>
using namespace std;
int a;
int &num()
{
    return a;
}
int main()
{
    num()=13;
    cout<<a;
    return 0;

}