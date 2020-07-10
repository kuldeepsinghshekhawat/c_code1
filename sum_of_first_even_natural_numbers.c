#include<stdio.h>
int sum(int);
int sum(int n)
{
    if(n==1)
        return 2;
    return((2*n)+sum(n-1));

}

void main()
{
    printf("%d",sum(5));

}