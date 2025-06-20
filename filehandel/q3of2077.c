// Write a program that reads data from a file “input.txt” and writes to “output.txt” file.


#include<stdio.h>
int main()
{
FILE *fptr1;
FILE *fptr2;
fptr1=fopen("input.txt","r");
fptr2=fopen("output.txt","w");
if(fptr1!=NULL)
{
    printf("file 1 is opened\n");
}
if(fptr2!=NULL)
{
    printf("file 2 is opened\n");
}
char ch;
while((ch=fgetc(fptr1))!=EOF)
{
fputc(ch,fptr2);
}





fclose(fptr1);
fclose(fptr2);
return 0;
}