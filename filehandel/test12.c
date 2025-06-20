#include<stdio.h>
int main()
{
    FILE *fptr1;
    FILE *fptr2;
    FILE *fptr3;
    fptr1=fopen("Num.txt","r");
    fptr2=fopen("EVEN.TXT","w");
    fptr3=fopen("ODD.TXT","w");
    if(fptr1!=NULL)
    {
        printf("open1\n");
    }
    if(fptr2!=NULL)
    {
        printf("open2\n");
    }
    if(fptr3!=NULL)
    {
        printf("open3\n");
    }
    int n;
    while((fscanf(fptr1,"%d",&n))!=EOF)
    {
        printf("%d ",n);
        if(n%2==0)
        {
            fprintf(fptr2,"%d",n);
        }
        else
        {
                        fprintf(fptr3,"%d",n);


        }
    }

    fclose(fptr1);
    fclose(fptr2);
    fclose(fptr3);
}