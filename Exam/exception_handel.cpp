 #include<iostream>
using namespace std;
int main()
{
  int neo,deo,result;;
  cout<<"enter the neo deo"<<endl;
  cin>>neo>>deo;
  try{
    if(deo==0)
    {
      throw deo;
    }
    result=neo/deo;
    cout<<"the result is"<<result<<endl;
  }
  catch(int ex)
  {
    cout<<"this is not possible "<<ex<<endl;
  }
}