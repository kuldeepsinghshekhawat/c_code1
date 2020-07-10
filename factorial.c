#include<stdio.h>
long fact(int n)
{
    if (n>0)
    {
        return(n*fact(n-1));
    }
    else
    {
        return 1;
    }
    
}

int main()
{printf("Factorail of 5 is %d\n",fact(6));
return 0;

}