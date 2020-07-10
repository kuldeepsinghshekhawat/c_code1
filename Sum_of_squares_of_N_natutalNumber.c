#include<stdio.h>
int sum(int N)
{
    if(N==1)
        return 1;
    return(N*N+sum(N-1));

}

void main()
{
    printf("Sum of square number %d:",sum(10));
}