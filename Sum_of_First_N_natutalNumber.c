#include<stdio.h>
int sum(int N)
{
    if(N==1)
        return 1;
    return(N+sum(N-1));
}
void main()
{
    printf("Sum of first 5 numbers %d",sum(5));
}