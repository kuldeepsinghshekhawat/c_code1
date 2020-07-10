/* Author=Kuldeep Singh Shekhawat
   Date=20/04/2020
   Topic=Switch Stmt*/
   
#include<stdio.h>
int main()
{
    int x;
    printf("Enter your age");
    scanf("%d",&x);
    switch (x)
    {
    case 3:
        printf("the age is three");
        break;

    case 13:
        printf("the age is 33");
        break;

    case 23:
        printf("the age is 23");
        //break;
    
    default:
    printf("Age is not");
        break;
    }
}
