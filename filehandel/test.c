// Create a structure named book with name, author, and publisher as its members.
//  Write a program using this structure to read data of 50 books and
//  display name of those books published by “XYX” publisher.
#include <stdio.h>
#include<string.h>
struct book
{
    char name[10];
    char author[10];
    char publisher[10];
};
int main()
{
    struct book data[5];
    char ch[4] = "XYX";
    for (int i = 1; i <= 5; i++)
    {
        printf("name of %d book \n", i);
        scanf("%s",&data[i].name);
        printf("name of author of %d book\n", i);
        scanf("%s",&data[i].author);
        printf("name of publisher of %d book\n", i);
        scanf("%s",&data[i].publisher);
    }
    printf("____________________----------------------------___________________________");
    for (int i = 1; i <= 5; i++)
    {
        if (strcmp(data[i].publisher, ch)==0)
        {
            printf("name of %d book is %s\n", i, data[i].name);

            printf("name of author of %d book is %s\n", i, data[i].author);

            printf("name of publisher of %d book is %s\n", i, data[i].publisher);
        }
    }
    return 0;
}
