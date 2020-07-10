#include<stdio.h>
int sum(int);
void main()
{
    printf("%d ",sum(6));

}

int sum(n)
{
    if(n==1)
        return 1;
    return(n*n*n+sum(n-1));
}