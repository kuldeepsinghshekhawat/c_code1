#include<stdio.h>
void quick(int A[],int N,int BEG, int END, int *LOCPTR)
{
    int LEFT,RIGHT,temp;
    LEFT=BEG;
    RIGHT=END;
    *LOCPTR=BEG;
step2:
    while(A[*LOCPTR]<=A[RIGHT] && *LOCPTR!=RIGHT)
    {
        RIGHT--;
    }
    if(*LOCPTR==RIGHT)
        return;
    if(A[*LOCPTR]>A[RIGHT])
    {
        temp=A[*LOCPTR];
        A[*LOCPTR]=A[RIGHT];
        A[RIGHT]=temp;
        *LOCPTR=RIGHT;
    }

    goto step3;
step3:
    while(A[LEFT]<=A[*LOCPTR] && LEFT!=*LOCPTR)
        LEFT++;
    if(*LOCPTR==LEFT)
        return;
    if(A[LEFT]>A[*LOCPTR])
    {
        temp=A[LEFT];
        A[LEFT]=A[*LOCPTR];
        A[*LOCPTR]=temp;
        *LOCPTR=LEFT;

    }
    goto step2;

}

void quick_sort(int A[],int N)
{
    int BEG, END, LOC, top=-1;
    int LOWER[10];
    int UPPER[10];
    if(N>1)
    {
        top++;
        LOWER[top]=0;
        UPPER[top]=N-1;

    }   

    while(top!=-1)
    {
        BEG=LOWER[top];
        END=UPPER[top];
        top--;
        quick(A,N,BEG,END,&LOC);
        if(BEG<LOC-1)
        {
            top++;
            LOWER[top]=BEG;
            UPPER[top]=LOC-1;

        }
        if((LOC+1)<END)
        {
            top++;
            LOWER[top]=LOC+1;
            UPPER[top]=END;

        }
    } 
}


void main()
{
    int A[]={44,33,11,55,77,90,40,60,99,22,88,66};
    int i;
    quick_sort(A,12);
    for(i=0;i<=11;i++)
    {
        printf("%d\n ",A[i]);
    }
}
