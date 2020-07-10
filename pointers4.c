/* Poiters and Array
**Array always consumes memory location in contiguous.
** Pointer when incremented, always point to immediately next block of its own type




#include<stdio.h>
void main()
{
    int a[5],*p,i;
    p=&a[0];
    for ( i = 0; i <5; i++)
    {
        scanf("%d",p+i);
        
    }
    for ( i = 0; i <5; i++)
    {
        printf("%d" ,*(p+i));
        
    }
    
}

*/
#include<stdio.h>
void input(int *p)
{
    int i;
    printf("Enter numbers:");
    for ( i = 0; i <5; i++)
    {
        scanf("%d",p+i);
        
    }
}


void display(int *p)
{
    int i;
    for ( i = 0; i <5; i++)
    {
        printf("%d \n" ,*(p+i));
        
    }
}

//a[i]=*(p+i)


//bubble sort
void sort(int *p)
{
    int round ,t,i;
    for(round=1;round<=4;round++)
    {
        for(i=0;i<=4-round;i++)
        {
            if(*(p+i)>*(p+i+1))
            {
                t=*(p+i);
                *(p+i)=*(p+i+1);
                *(p+i+1)=t;
            }
        }
    }
}


void main()
{
    int a[5];
    input(a);
    display(a);
    sort(a);
    display(a);
}
