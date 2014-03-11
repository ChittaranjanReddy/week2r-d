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
int main()
{
    int n,val;
    printf("enter the number");
    scanf("%d",&n);
    while(n>0)
    {
      val=n%10;
      insert(val);
      n=n/10;
    }
    struct ll *p=head;

    display();
    return 0;
}
