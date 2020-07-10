int min(int A[],int k,int N)
{
    int LOC,j;
    int MIN=A[k];
    LOC=k;
    for(j=k+1;j<=N-1;j++)
    {
        if(MIN>A[j])
        {
            MIN=A[j];
            LOC=j;

        }
    }
    return LOC;
}

void main()
{
    int A[]={33,11,66,88,98,77,44,56,22,1};
    int LOC,i,k,temp;
    for(k=0;k<=8;k++)
    {
        LOC=min(A,k,10);
        temp=A[k];
        A[k]=A[LOC];
        A[LOC]=temp;

    }
    //display the value of array
    for(k=0;k<=9;k++)
    {
        printf("%d,",A[k]);
    }
}