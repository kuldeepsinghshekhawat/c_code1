#include<stdio.h>
void main()
{
    int A[]={34,15,29,8};
    int i;
    bubble_sort(A,4);
    for ( i = 0; i < 4; i++)
    {
        printf("%d,",A[i]);
    }
    
}

void bubble_sort(int A[],int N)
{
    int round,i,temp;
    for ( round=0;round <=N-1; round++)
    {
        for(i=0;i<=N-1;i++)
         {
             if(A[i]>A[i+1])
             {
                temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;
             }
         }
    }
}

//Time complexity= o(n^2)