// WAP to check if the number is Armstrong or not using a
// default constructor where checkArm takes the entered number as an argument and
// returns the Armstrong number which is confirmed by result.
#include <iostream>
#include <cmath>
using namespace std;
class  Armnum
{
    private:
    int num;
    public:
    int counter=0,temp1,temp2,digit,sum=0;
     Armnum()
    {
        cout<<"This program is used for calculation armstrong!!!";
        cin>>num;
    }
    void calculation()
    {
        temp1=num;
        temp2=num;
        int i=0;
        while(temp1!=0)
        {
            temp1=temp1/10;
            counter++;
            i++;
        }
        int j=0;
        while(temp2!=0)
        {
            digit=temp2%10;
            sum=sum+pow(digit,counter);
            temp2=temp2/10;
            j++;
            
        }
       
    }
    void comp_out(){
    if(num==sum)
    {
        cout<<sum<<" is armstrong number!"<<endl;
        
    }
    else
    {
          cout<<sum<<" is not an armstrong number!"<<endl;
    }
    
    }
   
    
    
};
int main()
{
    Armnum obj1;
    
    obj1.calculation();
    obj1.comp_out();

    return 0;
}