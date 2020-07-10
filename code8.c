#include<stdio.h>
int main()
{
    int a,b;
    int result;
    a=493.32;
    b=3242.43;
    result=a+b;
    //here a and b has float value but gives us answer in int, so it gives warning
    printf("%d,%d,%d",a,b,result);
    return 0;
}

/*
PLACEHOLDERS
int=%d;
float/double=%f
char=%c,
str=s/%s
*/
