#include<stdio.h>
struct node
{
    struct node *prev;
    int info;
    struct node *next;

};

void insertStart(struct node **s,int data);

void insertlast(struct node **s,int data);

void main()
{
    struct node *start=NULL;
    insertStart(&start,10);
    insertlast(&last,20)
}

void insertlast(struct node **s,int data)
{
    struct node *p,*t;
    p=(struct node*)malloc(sizeof(struct node));
    p->info=data;
    p->next=NULL;
    
    if(*s==NULL
    {
        p->prev=NULL;
        *s=p;

    }
    else
    {
        t=*s;
        while(t->next!=NULL
            t=t->next;
        p->prev=t;
        t->next=p;

    }
    
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


   