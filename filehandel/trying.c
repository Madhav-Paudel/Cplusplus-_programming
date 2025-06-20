#include<stdio.h>
#include<string.h>
int main()
{
    char ch[10],temp[10];
    int n;
    printf("enter total no of string\n");
    scanf("%d",&n);
    printf("enter string\n");
    for(int i=0;i<n;i++)
    {


scanf("%d",&ch[i]);
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(strcmp(ch[i],ch[j])>0)
            {
                strcpy(temp,ch[i]);
                strcpy(ch[i],ch[j]);
                strcpy(ch[j],temp);
            }
        }
    }
    printf("after sorting\n");
    for(int i=0;i<n;i++)
    {
        printf("%s",ch[i]);
    }
    return 0;
}