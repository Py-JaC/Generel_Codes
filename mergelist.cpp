#include<stdio.h>
#include<math.h>
struct list1* newnode(int data);
struct list1{
int data;
struct list1 *next;
};

main()
{int a;
    struct list1 *ending,*head1,*head2,*p,*q;
head1=new struct list1();
head2=new struct list1();
q=head1;
q->data=0;
printf("enter list 1");
while(q->data!=-1)
{scanf("%d",&a);
p=newnode(a);
q->next=p;
q=p;

}
q->next=NULL;
ending=q;
q=head2;
q->data=0;
printf("enter list 2");
while(q->data!=-1)
{scanf("%d",&a);
p=newnode(a);
q->next=p;
q=p;

}
q->next=NULL;
a=4;
p=head2;
while(a--){p=p->next;}
ending->next=p;
/**
for(p=head1;p!=NULL;p=p->next)
for(q=head2;q!=NULL;q=q->next)
    {
        if(p==q)
        {
            printf("merge at %d",p->data);
            return 0;
        }
    }

**/
int l1=0,l2=0,dif;
p=head1;
while(p->next!=NULL)
    {l1++;p=p->next;}
p=head2;
while(p->next!=NULL)
    {l2++;p=p->next;}

dif=(l1-l2);
if(l1-l2<0)
    dif=-dif;
if(l1>l2)
        {p=head1;
            while(dif--)
                p=p->next;
                q=head2;
        }
else
{p=head2;
            while(dif--)
                p=p->next;
                q=head1;
        }
while(p!=NULL)
{
    if(p==q)
    {
        printf("merge at %d",p->data);
    return 0;
    }
    p=p->next;
    q=q->next;
}


}
struct list1* newnode(int data)
{
struct list1* node=new struct list1;
node->data=data;
return node;

}
