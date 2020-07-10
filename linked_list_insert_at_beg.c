#include<stdio.h>
struct node
{
    struct node *prev;
    int info;
    struct node *next;

};

void insertStart(struct node **s,int data);

void main()
{
    struct node *start=NULL;
    insertStart(&start,10);
}

void insertStart(struct node **s,int data)
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->info=data;
    p->prev=NULL;
    p->next=*s;
    *s=p;
}
    /*if(*s==NULL)
    {
        //p->next=NULL;
        *s=p;
    }
    else
    {
        //p->next=*s;

    }
    
}
*/
