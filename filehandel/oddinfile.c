#include<stdio.h>
int main()
{
    FILE *odd;
    odd=fopen("odd.txt","w+");
    int n;
    printf("enter n number");
    scanf("%d",&n);
    if(odd==NULL)
    {
        printf("notworking");
    }
    else{
        printf("working fine");
    }
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
                       fprintf(odd,"%d",i);
        }
    }
      fclose(odd);
}