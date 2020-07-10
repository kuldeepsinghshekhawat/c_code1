#include<stdio.h>
void DTob(int n)
{
    if(n==1)
        printf("1");
    else
    {
        DTob(n/2);
        printf("%d ",n%2);
        
    }
    
}

void main()
{
  DTob(25);
}
