// function and pointer
#include<iostream>
using namespace std;
int square(int n)
{
    return n*n;

}
int main()
{
    int x;
    int (*fptr) (int);
    fptr=square;
    cout<<"enter the value of x";
    cin>>x;
    int sq;
    sq=(*fptr)(x);
    cout<<"the square of"<<x<<"is:"<<sq<<endl;
}