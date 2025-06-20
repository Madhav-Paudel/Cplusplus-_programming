#include <stdio.h>
int main()
{
    FILE *fptr1;
    FILE *fptr2;
    FILE *fptr3;
    fptr1 = fopen("NUMBER.TXT","r");
    fptr2 = fopen("EVEN.TXT", "w");
    fptr3 = fopen("ODD.TXT", "w");
    if (fptr1 != NULL)
    {
        printf("file 1 is opened\n");
    }
    if (fptr2 != NULL)
    {
        printf("file 2 is opened\n");
    }
    if (fptr3 != NULL)
    {
        printf("file 3 is opened\n");
    }
    int a;
   
    while ((fscanf(fptr1, "%d", &a)) != EOF)
    {
        printf("%d",a);
        if (a % 2 == 0)
        {
            fprintf(fptr2, "%d", a);
        }
        else
        {
            fprintf(fptr3, "%d", a);
        }
    }
    
    printf("rewriting done\n");

    fclose(fptr1);
    fclose(fptr2);
    fclose(fptr3);
}