#include<stdio.h>
int main()
{
    /* code */
    int a,i;
    //print multiplication table of a nnumber enterd by the uswer in preety form
    printf("Enter the table you want to print:");
    scanf("%d",&a);
    for(i=1;i<11;i++)
    {
     printf("%d*%d=%d\n",a,i,a*i);
    }
    return 0;

}
