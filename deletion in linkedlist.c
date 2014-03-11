#include<stdio.h>
#include<stdlib.h>
struct ll
{
    int data;
    struct ll *next;
}*head=NULL;
void display()
{

    struct ll *p=head;
    while(p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->next;
    }

}
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
void atbeg()
{
    struct ll *temp=head;
    head=head->next;
    free(temp);
}
void atlast()
{
    struct ll *temp=head;
    struct ll *p=temp;
    while(temp->next!=NULL)
    {
        p=temp;
        temp=temp->next;
    }
    p->next=NULL;
    free(temp);
}
void givenpos(int num)
{
    int k=1;
    struct ll *p=head;
    struct ll *q=p;
    while(p!=NULL&&k<num)
    {
        k++;
        q=p;
        p=p->next;
    }
    if(k!=num)
    {
        printf("there are no required no of nodes");
    }
    q->next=p->next;
    free(p);
}
int main()
{
     insert(4);
 insert(10);
 insert(11);
 insert(14);
 insert(20);
 display();
 printf("after deletion at beg\n");
 atbeg();
 display();
 printf("after at end\n");
 atlast();
 display();
 printf("after specified position\n");
 givenpos(2);
 display();
 return 0;
}
