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
void display()
{

    struct ll *p=head;
    while(p!=NULL)
    {
        printf("%d\t",p->data);
        p=p->next;
    }

}
void reverse(struct ll *p)
{
if(p==NULL)
 return ;
 reverse(p->next);
 printf("%d\t",p->data);
}
int main()
{
    printf("enter the no of elements");
int max,n,i=0;
scanf("%d",&max);
printf("enter elememnts");
for(i=0;i<max;i++)
{
    scanf("%d",&n);
    insert(n);
}
display();
 printf("\n after\n");
 reverse(head);

 return 0;
}
