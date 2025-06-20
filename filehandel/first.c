#include <stdio.h>
int main()
{
    FILE *fptr,*fptr1;
fptr = fopen("test.txt", "r");

    char ch;
   ch=fgetc(fptr);
   while (ch!=EOF)
   {
    //  fprintf(fptr, "%c ", &ch);
    printf("%c ", ch);
   }

    fclose(fptr);
    return 0;
}
