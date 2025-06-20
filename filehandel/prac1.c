//number are in num.txt extrat prime number only in prime.txt
#include<stdio.h>
int main()
{
    FILE *fptr1;
    FILE *fptr2;
    fptr1=fopen("input.txt","r");
    fptr2=fopen("odd.txt","w");
    int a;
    int counter1=0;
    while ((fscanf(fptr1,"%d",&a))!=EOF)
    {
        counter1++;
    }
    printf("%d",counter1);
    int counter2=0;
    rewind(fptr1);
  for(int i=1;i<=counter1/2;i++)
  {
    if((fscanf(fptr1,"%d",&a))%i==0)
    {
counter2++;
fprintf(fptr2,"%d",a);
    }
    

  }
//    for(int i=1;i<=counter1;i++)
//   {
//    if(counter2==1 && (fscanf(fptr1,"%d",&a))%i==0)
//     {
//         fprintf(fptr2,"%d",i);
//     }
    

//   }

  
  
fclose(fptr1);
fclose(fptr2);
    
}