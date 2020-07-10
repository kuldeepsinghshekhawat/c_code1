//Takes Something Return Nothing
#include<stdio.h>
add(int ,int);//global declaration
int main()
{
    int x,y;
    //add(int,int);
    printf("Enter 2 number:");
    scanf("%d%d",&x,&y);
    add(x,y);//call by value and actual argument
    return 0;
    }

    add(int a,int b) // formal argument
    {
        int c;
        c=a+b;
        printf("%d",c);
    }

