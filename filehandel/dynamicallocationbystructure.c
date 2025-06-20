#include<stdio.h>
#include<stdlib.h>
struct employee{
    char ch;
    char address;
    int age;
    float salary;
};
int main()
{
//   struct employee data[n];
    int n;
   printf("enter total no of employee");
   scanf("%d",&n);
 char **ptr=(char**)malloc(n*sizeof(char*));
  int  *ptr1=(int *)malloc(n*sizeof(int));
  int  *ptr2=(int *)malloc(n*sizeof(int));

   if(ptr==NULL)
   {
       printf("sorry\n");
       
   }
   //for storing the name and address
   
   for(int i=0;i<n;i++)
   {
       ptr[i]=(char*)malloc(4895*sizeof(char*));
       if(ptr[i]==NULL)
       {
           printf("sorry");
       }
       printf("enter the name of %d employee\n",i+1);
       scanf("%s",ptr[i]);
       printf("enter the address of %d employee\n",i+1);
       scanf("%s",ptr[i]);
   }
   //for storing the age salary
   for(int i=0;i<n;i++)
   {
       printf("\nenter the age of %d employee\n",i+1);
       scanf("%d",ptr1+i);
       printf("\nenter the salary of %d employee\n",i+1);
       scanf("%d",ptr2+i);
   }
   //output 
   printf("------------------------------------------------------");
   for(int i=0;i<n;i++)
   {
       printf("\nentered the name of %d employee\n",i+1);
       printf("\n%s\n",ptr[i]);
       printf("\nentered the address of %d employee\n",i+1);
       printf("\n%s\n",ptr[i]);
       printf("\nentered the age of %d employee\n",i+1);
       printf("\n%d\n",*(ptr1+i));
       printf("\nentered the salary of %d employee\n",i+1);
       printf("\n%d\n",*(ptr2+i));
   }
}