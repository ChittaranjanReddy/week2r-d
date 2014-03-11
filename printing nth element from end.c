#include<stdio.h>
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
void print(int num)
{
    int count=0,k=0;
struct ll *p=head;
while(p!=NULL)
{
    count++;
    p=p->next;
}
p=head;
count=count-num;
while(p!=NULL&&k<count)
{
    k++;
    p=p->next;

}
if(k!=count)
{
    printf("not found");
    return;
}

printf("\n%d",p->data);
}
int main()
{
    int max,element,n,i;
    printf("enter no of elements u want to enter\n");
    scanf("%d",&max);
    printf("enter elements\n");
    for(i=0;i<max;i++)
    {
        scanf("%d",&n);
        insert(n);
    }
    printf("enter locaation\n");
    scanf("%d",&element);
    display();
    print(element);
}
