#include<stdio.h>
int main()
{
    FILE *fptr1;
        FILE *fptr2;

    char ch;
    fptr1=fopen("EVEN.TXT","r");
    fptr1=fopen("ODD.TXT","w");
    if(fptr1!=NULL)
    {
        printf("opend\n");
    }
while((fscanf(fptr1,"%c",&ch))!=EOF)
{
    fprintf(fptr2,"%c",ch);
    printf("%c",ch);
}
   
    fclose(fptr1);
}