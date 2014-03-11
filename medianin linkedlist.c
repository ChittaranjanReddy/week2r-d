#include<stdio.h>
#include<stdlib.h>
struct ll
{
    int data;
    struct ll *next;
}*head=NULL;
void insert(int num)
{
struct ll *p=(struct ll *)malloc(sizeof(struct ll));
    if(!p)
    {
        printf("error in creating new list");
    }
    p->data=num;
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
void insertlast(int num)
{
    struct ll *q=(struct ll *)malloc(sizeof(struct ll));
    if(!q)
    {
        printf("error in cerating new node");;
    }
    q->data=num;
    struct ll *p=head;
        while(p->next!=NULL)
        {
            p=p->next;
        }
    p->next=q;
    q->next=NULL;
}
void middle(int num,int pos)
{
    int k=1;
    struct ll *p=head;
    struct ll *q=(struct ll *)malloc(sizeof(struct ll));
    if(!q)
    {
        printf("error in creating new node\n");
    }
    q->data=num;
    while(p!=NULL&&k<(pos-1))
    {
        k++;
        p=p->next;
    }
    if(k!=pos-1)
    {
        printf("there is no specified location or no of nodes not avaliable\n");
    }
    q->next=p->next;
    p->next=q;

}
void display()
{

    struct ll *p=head;
    while(p!=NULL)
    {
        printf("%d\t",p->data);
        p=p->next;
    }

}
void median(int count)
{
    int k;
    float ans;
    struct ll *q=head,*r;
    /*while(p!=NULL)
    {
        p=p->next;
        count++;
    }*/
    if(count%2!=0)
    {
        for(k=1;k<=count/2;k++)
        {
            q=q->next;
        }
        printf("median is...%d\n",q->data);
    }
    else
        {
          for(k=1;k<=count/2;k++)
          {
               r=q;
              q=q->next;
          }
          ans=q->data+r->data;
          printf("median is ...%f",ans/2);
        }
}

int main()
{
    int max,n,i;
    printf("enter the no of elements\n");
    scanf("%d",&max);
    printf("enter elements\n");
    for(i=0;i<max;i++)
    {
        scanf("%d",&n);
        insert(n);
    }
    display();
    median(max);
    return 0;
}


