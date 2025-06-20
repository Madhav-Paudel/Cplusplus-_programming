// Write a program that reads data from a file “input.txt” and writes to “output.txt” file.
#include<stdio.h>
int main()
{
    FILE *file1,*file2;
    file1=fopen("input.txt","r");
    char B;
    file2=fopen("output.txt","w");
    if(file1==NULL)
    {
        printf("unable to open(file 1)!");
    }
    if(file2==NULL)
    {
        printf("unable to open(file 2)!");
       
    }
while((B=fgetc(file1))!=EOF)
{
    fputc(B,file2);
}
return 0;
}