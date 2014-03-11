#include<stdio.h>
#include<conio.h>
struct ll
{
int data;
struct ll *next;
}*head=NULL;
//insertion at the beginning in the linkedlist
void insert(int num)
{
struct ll *p=(struct ll *)malloc(sizeof(struct ll));
if(p==NULL)
 printf("error in creating the new node");
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
//insertion at the middle with given position
void middle(int num,int pos)
{
  int k=1;
  struct ll *p=head;
  struct ll *q=(struct ll *)malloc(sizeof(struct ll ));
  q->data=num;
  while(k<(pos-1)&&p!=NULL)
  {
      k++;
      p=p->next;
  }
  if(k!=(pos-1))
  {
      printf("the position does not xist");
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
    printf("\n");
}
//these is used to reverse the linked list and also print the list after reversing ;
void reverse()
{
    struct ll *p,*q,*r;
    r=head;
    p=r->next;
    q=r->next;
    while(q!=NULL)
    {
        q=q->next;
        p->next=r;
        r=p;
        p=q;
    }
    head->next=NULL;
    while(r!=NULL)
    {
        printf("%d\t",r->data);
        r=r->next;
    }
}
int main()
{
    int n,p,i;
    printf("enter the noof elements");
    scanf("%d",&p);
    printf("enter elements");
    for(i=0;i<p;i++)
    {
        scanf("%d",&n);
        insert(n);
    }
display();
reverse();
return 0;
}
