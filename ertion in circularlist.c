#include<stdio.h>
#include<stdlib.h>
struct ll
{
int data;
struct ll *next;
}*head=NULL;
//inserction at the beginning
void insert(int n)
{
    struct ll *p=(struct ll *)malloc(sizeof(struct ll));
     p->data=n;


    if(head==NULL)
    {
        p->next=NULL;
        head=p;
    }
    else
        {
          p->next=head;
          head=p;
        }
}
void display()
{
    //first making it to point last

    struct ll *q=head;

            do
            {

                printf("%d\t",q->data);
                q=q->next;
            }
            while(q!=head);
    printf("%d",q->data);
    printf("\n");
}
int main()
{
    int max,n,i;
    printf("enter the no of elements\n");
    scanf("%d",&max);
    printf("enter the elemenn\n");
    for(i=0;i<max;i++)
    {
        scanf("%d",&n);
        insert(n);
    }
    struct ll *r=head;
    while(r->next!=NULL)
    {
        r=r->next;
    }
    r->next=head;
display();
}
