/*macro:
int *p=NULL
*/
//#define NULL 0


/*Function pointer
void f1()
{}

void (*p)();
p=f1();
p();
*/


/*
int (*p)(int);
*/
//Function pointer
#include<stdio.h>
int f1(int);
void main()
{
    int (*p)(int);
    p=f1;
    printf("%d,",p(5));

}

int f1(int x)
{
    printf("%d",x);
    return(x+1);
}


