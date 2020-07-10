#include<stdio.h>
struct node
{
    struct node *prev;
    int info;
    struct node *next;

};

void insertStart(struct node **s,int data);
void insertlast(struct node **s,int data);
void inserafter(struct node **s,struct node *ptr,int data);

struct node* find(struct node **s,int data);
void deleteFirst(struct node **s);

void main()
{
    struct node *ptr;
    struct node *start=NULL;
    insertStart(&start,10);
    insertlast(&last,20);
    ptr=find(&start,20);
    insertafter(&start,ptr,20);

}

void deleteFirst(struct node **s)
{
    struct node *t;
    if(*s==NULL)
        return 0;
    else
    {
        t=*s; 
        start=start->next;
        start->prev=NULL;
        free(t);
        return 1;
        
    }
    
}

struct node* find(struct node **s,int data);
{
    struct node *t;
    if(*s==NULL)
        return NULL;
    else
    {
        t=*s;
        while(t!=NULL){
            if(t->info==data)
                return t;
            t=t->next;
        }
        return NULL;
        
    }
    
}

void inserafter(struct node **s,struct node *ptr,int data);
{
    struct node *p;
    if(ptr==NULL
        printf("Invalid Instertion");
    else
    {
        p=(struct node*)malloc(sizeof(struct node));
        p->info=data;
        p->prev=ptr;
        p->next=ptr->next;
        if(ptr->!=NULL)
            ptr->next->prev=p;
        ptr->next=p;
    }
    
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
