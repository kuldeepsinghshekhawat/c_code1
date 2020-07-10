#include<stdio.h>
void main()
{
    int i,j,num;
    for(i=0;i<10;i++)
    {printf("%d",i);
     for(j=0;j<10;j++){
         printf("Enter the number");
         scanf("%d",num);
         if (num==0)
         {goto end;
         }
     }
    }
 end:
}