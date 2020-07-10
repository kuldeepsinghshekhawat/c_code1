#include<stdio.h>
void main()
{
    const int x=5;
    const int *p;//pointer to const
    p=&x;
    printf("x1=%d \n",x);
    ++(*p);
    printf("x2=%d",x);
    
}

/*
Pointer to const
1. const int *p;
2. int const *p;

const pointer
int *const int
