// Suppose a file named “Num.txt” contains a list of integers.
//  Write a program to extract the prime numbers only from that file and write them on “Prime.txt” file.
#include<stdio.h>
int main()
{
    FILE *fptr1;
    FILE *fptr2;
    fptr1=fopen("Num.txt","r");
    fptr2=fopen("Prime.txt","w");
if(fptr1!=NULL)
{
    printf("file 1 is opened\n");
}
if(fptr2!=NULL)
{
    printf("file 2 is opened\n");
}
int a;
int counter=0;
while((fscanf(fptr1,"%d",&a))!=EOF)
{
    printf("%d ",a);
    counter++;
    

}
int flag =0;

for(int i=1;i<=counter;i++)
{
    if((a%i==0)==2)
    {
        fprintf(fptr2,"%d",a);
    }
}


fclose(fptr1);
fclose(fptr2);
    return 0;
}