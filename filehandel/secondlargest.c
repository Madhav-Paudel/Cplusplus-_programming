
#include <stdio.h>

int main()
{
   int max1,max2,n;
   int num[100];
   printf("enter how many number you want to enter:\n");
   scanf("%d",&n);
   printf("enter %d numbers",n);
   for(int i=0;i<n;i++)
   {
       scanf("%d",&num[i]);
       
   }
max1=num[0];
max2=num[1];
for(int i=2;i<=n;i++)
{
    if(max1<num[i])
    {
        max2=max1;
        max1=num[i];
    }
}
printf("2largest is %d",max2);



    return 0;
}