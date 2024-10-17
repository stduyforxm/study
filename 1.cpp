#include <stdio.h>
#include<stdlib.h>
typedef struct node
{
    int number;
    struct node *next; 
}node;
int main(int argc,char *argv[])
{
    int n;
    scanf("%d",&n);
    node *head=(node*)malloc(sizeof(node));
    node *p=head;
    for(int i=0;i<n;i++)
    {
        node *q=(node*)malloc(sizeof(node));
        scanf("%d",&q->number);
        p->next=q;
        p=q;
    }
    p->next=NULL;
    p=head->next;
    while(p!=NULL)
    {
        printf("%d\n ",p->number);
        p=p->next;
    }
    return 0;
}