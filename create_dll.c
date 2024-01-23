#include<stdio.h>  
#include<stdlib.h>

struct Node 
{
    int data; 
    struct Node *prev,*next; 
};   
void display(struct Node *first)
{
    while(first!=NULL)
    {
        printf("%d ",first->data); 
        first=first->next;
    }
}

int main()
{
    struct Node *first,*last,*temp; 
    first=(struct Node*)malloc(sizeof(struct Node));   
    int x; 
    scanf("%d",&x); 
    first->data=x; 
    first->prev=NULL; 
    last=first; 
    last->next=NULL; 
    scanf("%d",&x); 
  
    while(x!=-1)
    {
        temp=(struct Node*)malloc(sizeof(struct Node)); 
        temp->data=x; 
        temp->prev=last; 
        last->next=temp; 
        last=temp ;
        last->next=NULL; 
        scanf("%d",&x); 
    }
    display(first);
}

