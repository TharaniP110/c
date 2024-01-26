#include<stdio.h> 
#include<stdlib.h> 

struct Node 
{
    int data; 
    struct Node *next; 
};   
void display(struct Node *first)
{
    while(first!=NULL)
    {
        printf("%d ",first->data); 
        first=first->next;
    }
}
struct Node* reverse(struct Node *first)
{
    struct Node *p,*q,*r; 
    p=first; 
    r=q=NULL; 
    while(p!=NULL)
    {
        r=q; 
        q=p; 
        p=p->next;
        q->next=r; 
    } 
    return q;
}
int main()
{
    struct Node *first,*last,*temp; 
    first=(struct Node*)malloc(sizeof(struct Node)); 
    int x; 
    scanf("%d",&x); 
    first->data=x; 
    last=first;   
    last->next=NULL; 
    scanf("%d",&x); 
    while(x!=-1)
    {
        temp=(struct Node*)malloc(sizeof(struct Node)); 
        temp->data=x; 
        last->next=temp; 
        last=temp; 
        last->next=NULL; 
        scanf("%d",&x);
    }
    first=reverse(first);
    display(first);
}
