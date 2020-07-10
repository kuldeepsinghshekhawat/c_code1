//Array in C
#include<stdio.h>
int main()
{
    int marks[4];
    for(int i=0;i<4;i++){
        printf("Enter the data %d:",i);
        scanf("%d",&marks[i]);

    }
    for(int i=0;i<4;i++)
    {
        //printf("Enter the data");
        printf("Marks%d, %d",i,marks[i]);
                
    }
    return 0;
}