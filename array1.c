// Array is the collection of similar datatype
// Array is also known as subscript variable
//Array is group of variable
#include<stdio.h>
int main()
{
    int a[10], i, sum=0;
    float avg;
    printf("Enter ten numbers:");
    for (i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }    
    for (i=0;i<=9; i++)
    {
        sum=sum+a[i];
    }
        avg=sum/10;
        printf("Sum is %d and Avg is %f",sum,avg);
    
    return 0;
}
