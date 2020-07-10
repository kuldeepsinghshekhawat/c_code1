#include<stdio.h>
#include<math.h>
#include<conio.h>
int dotproduct(int A[],int B[])
{
    int i, product=0;
    for(i=0;i<=n;i++)
    {
        product=product+A[i]*B[i];

    }
    return product;
}

void crossproduct(int A[],int B[],int P[])
{
    P[0]=A[1]*B[2]-B[1]*A[2];
    P[1]=A[0]*B[2]-B[0]*A[2];
    P[2]=A[0]*B[1]-B[0]*A[1];

    
}

int main()
{
    int A[10];
    int B[10];
    int P[10],i,n;
    printf("Enter the Item of Array/Matrix");
    for(i=0;i<=n;i++)
    {
        scanf("%d%d",&A[i],B[i]);

    }

    
    crossproduct(A,B,P);
    printf("Dot Product A is %d, B is %d",A,B);
    for(i=0;i<=n;i++)
    {
       printf("Cross Product %d",P[i]);

    }
    return 0;
}
