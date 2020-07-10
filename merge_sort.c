#include<stdio.h>

void merge(int A[],int n1, int index1,int B[],int n2,int index2,int C[],int index)
{
    while(n1 && n2)
    {
        if(A[index1]<B[index2])
        {
            C[index]=A[index1];
            index++;
            index1++;
            n1--;
        }
        else
        {
            C[index]=B[index2];
            index++;
            index2++;
            n2--;
        }
        
    }

    while(n1)
    {
        C[index]=A[index1];
        index++;
        index1++;
        n1--;
    }

    
    while(n2)
    {
        C[index]=B[index2];
        index++;
        index2++;
        n2--;
    }
}
 

void mergepass(int A[],int N,int L, int B[])
{
    int j,LB;//LB=Lower bound
    int Q,S,R;
    Q=N/(2*L);
    S=2*L*Q;
    R=N-S;

    for ( j = 0; j<Q; j++)
    {
        LB=(2*j)*L;
        merge(A,L,LB,A,L,LB+L,B,LB);

        /* code */
    }

    if(R<=L)
    {
        for(j=0;j<R;j++)
            B[S+j]=A[S+j];

    }
    else
    {
        merge(A,L,S,A,R-L,S+L,B,S);
    }
    
    
}

void merge_sort(int A[],int N)
{
    int L=1,B[11];
    while (L<N)
    {
        mergepass(A,N,L,B);
        mergepass(B,N,2*L,A);
        L=4*L;

        /* code */
    }
    
}

void main()
{
    int i, a[]={11,44,65,23,87,45,59,42,88,1,10};
    for(i=0;i<=10;i++)
        printf("%d ",a[i]);
    merge_sort(a,11);
    printf("\n");
    for(i=0;i<=10;i++)
        printf("%d, ",a[i]);
}


//L=size of next element
//Q=pair
//Residual
//
