#include<stdio.h>
void main()
{
    int x;
    int *p;//uninitialization or wild pointer
    *p=4;
     p=&x;
}