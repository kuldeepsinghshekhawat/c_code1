#include<stdio.h>
//Linked list
struct ListNode
{
    int vertexNo;
    struct ListNOde *next;
    
};

struct Graph
{
    int V;
    int E;
    struct ListNode *Adj;
};

struct Graph* adjListOfGraph()
{
    int i,x,y;
    struct ListNode *t,*  temp;
    struct Graph *G;
    G=(struct Graph*)malloc(sizeof(struct Graph));
    printf("Enter number of vertex and number of edges:");
    scanf("%d%d",&G->V,&G->E);
    G->Adj=(struct ListNode*)malloc(G->V * sizeof(struct ListNode));
    for(i=0;i<G->V;i++)
    {
        G->Adj[i]->vertexNo=i;
        G->Adj[i]->next= G->Adj+i;

    }
    for(i=0;i<G->E;i++)
    {
        printf("Enter edge source node and destination node:");
        scanf("%d%d",&x,&y);
        temp=(struct ListNode*)malloc(sizeof(struct ListNode));
        temp->vertexNo=y;
        temp->next=G->Adj[x];
        t=G->Adj[x];
        while(t->next!=G->Adj[x])
            t=t->next;
        t->next=temp;
    }
    return(G);
}

-->