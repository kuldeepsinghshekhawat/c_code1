#include<stdio.h>
void main()
{
    const int x=5;
    int *p;
    p=&x;
    printf("x1=%d \n",x);
    ++(*p);
    printf("x2=%d",x);
    
}