#include<stdio.h>

struct student{
    int roll;
    char name[25];
    char address[24];
    float marks;
    
};



int main()
{
    struct student file[5];
    for(int i=0;i<5;i++)
    {
        printf("\nenter roll\n");
        scanf("%d",&file[i].roll);
        printf("\nname\n");
        scanf("%s",&file[i].name);
        printf("\naddress\n");
        scanf("%s",&file[i].address);
        printf("\nmarks\n");
        scanf("%f",&file[i].marks);
    }
    //display
    for(int i=0;i<5;i++)
    {

        printf(" roll no :%d\n",file[i].roll);
        printf("name:%s\n",file[i].name);
        printf("address:%s",file[i].address);
        printf("marks%f",file[i].marks);
    }
    //printing
    for(int i=0;i<5;i++)
    {
        
        if(file[i].marks>250)
        {
            printf("alpha");
        printf(" roll no :%d\n",file[i].roll);
        printf("name:%s\n",file[i].name);
        printf("address:%s",file[i].address);
        printf("marks%f",file[i].marks);
            
        }
    }

    return 0;
}