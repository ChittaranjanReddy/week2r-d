#include<stdio.h>
#include<stdlib.h>
struct dll
{
int data;
struct dll *next;
struct dll *prev;
}*head=NULL;
void insert(int n)
{
    struct dll *p=(struct dll *)malloc(sizeof(struct dll));
     p->data=n;


    if(head==NULL)
    {
        p->next=NULL;
        p->prev=NULL;
        head=p;
    }
    else
        {
          p->next=head;
          p->prev=NULL;
          p->next->prev=p;
          head=p;
        }
}
void mid()
{
    struct dll *p=head,*q=head;
    while(q->next!=NULL)
    {
        q=q->next;
    }
    while(1)
    {


        //these id for even no of elements in the linkedlist
        if((p->next==q)&&(q->prev==p))
        {
                printf("the middle element id %d ,%d",p->data,q->data);
            break;
        }
        //these condition for odd no of elementsss
        else if(p->next==q->prev)
        {
            printf("\nthe middle element is %d",p->next->data);
            break;
        }
            p=p->next;
            q=q->prev;

    }
}
void display()
{
    struct dll *q=head;
    while(q!=NULL)
    {
        printf("%d\t",q->data);
        q=q->next;
    }
    printf("\n");
}
int main()
{
int max,n,i=0;
printf("enter the no of elemnents\n");
scanf("%d",&max);
printf("enter the elements\n");
    for(i=0;i<max;i++)
    {

       scanf("%d",&n);
       insert(n);
    }
    display();
    mid();
}
