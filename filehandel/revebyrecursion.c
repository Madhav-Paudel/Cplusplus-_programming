#include<stdio.h>
int rev(int n);
int main()
{
    int n;
    printf("number\n");
    scanf("%d",&n);
    printf("%d",rev(n));
}
int rev(int n)
{
    int d;
    static int r=0;
    if(n==0)
    {
        return 0;

    }
    else
    {
        d=n%10;
        r=r*10+d;
        rev(n/10);
    }
    return r;
}