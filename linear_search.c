#include<stdio.h>
void lin_serch(int L[],int N,int ITEM)
{
    int flag=1,k;
    for(k=0;k<=N;k++)
    {
        if(L[k]==ITEM)
        {
            flag=0;
            printf("Search succcessful");
        }
    }
    if(flag==1)
    {
        printf("search unsuccesful");

    }
}

void main()
{
    int A[]={23,34,45,43,22,56,454,76,453,98,11,24,54};
    lin_serch(A,13,3);
}