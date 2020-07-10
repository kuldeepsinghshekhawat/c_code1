#include<stdio.h>
void insertion_sort(int [],int);
void insertion_sort(int A[],int N)
{
    int i,j,temp;
    for(i=1;i<N;i++)
    {
        temp=A[i];
        for(j=i-1;j>=0 && temp<A[j];j--)
        {
            A[j+1]=A[j];
        
        }
        A[j+1]=temp;
    }
}

void main()
{
    int A[]={23,100,43,65,45,21,22,1,90};
    int i;
    insertion_sort(A,9);
    for(i=0;i<=8;i++)
    {
        printf("%d,",A[i]);
    }
}
