// Design a class called BankAccount that has
// private data members account_number, account_holder_name, and balance. Include
// member functions to:
// Initialize the account with an account number, account holder's name, and
// initial balance.
// Deposit an amount into the account.
// Withdraw an amount from the account.
// Check the current balance.


#include<iostream>
using namespace std;
class BankAccount
{
    private:
    long int account_number;
    string account_holder_name;
    int balance=0,withdraw=0;
    public:
void account_number1()
    // account number
{
    cout<<"enter your account number"<<endl;
    cin>>account_number;

}
void account_holder_name1()
{
    cout<<"enter the name of account holder\n";
    cin>>account_holder_name;
}
void ins_balance1()
{
    cout<<"the initial balance is"<<balance<<endl;
    cout<<"enter how many balance you want to deposit"<<endl;
    cin>>balance;
    cout<<"Rs:"<<balance<<"\t is successfully deposit"<<endl;
    cout<<"how many you want to withdraw"<<endl;
    cin>>withdraw;
    int remain=balance-withdraw;
    cout<<"the amount Rs: "<<withdraw<<"\t is withdraw successfully from Rs:"<<balance<<"now it remain Rs"<<remain<<"\tamount in the account";
}

};
int main()
{
    BankAccount login;
    login.account_number1();
    login.account_holder_name1();
    login.ins_balance1();
    
}