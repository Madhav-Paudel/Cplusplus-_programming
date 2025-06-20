#include<stdio.h>
int fibb(int n);
int main()
{
    int n;
    printf("number:\n");
    scanf("%d",&n);
   int result=fibb(n);
   if(prime(result))
   {
       printf(" %d is prime number\n",result);
   }
   else
   {
       printf("%d is not a prime number\n",result);
       }
    
}
int fibb(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
  
    else 
    {
        return fibb(n-1)+fibb(n-2);
    }
}
int prime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
        else 
        {
            return 1;
        }
    }
}