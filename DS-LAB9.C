#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct node
{ int data;
  struct node* next;
  struct node* prev;
};
typedef struct node*n;
n insertfront(int item,n head)
{ n p,q;
  p=(n)malloc(sizeof(struct node));
  p->data=item;
  if(head==NULL)
  { p->next=NULL;
    p->prev=NULL;
  }
  p->next=head;
  head->prev=p;
  p->prev=NULL;
  return p;
}
n insertleft(n head,int item)
{ n p,q,t;
if(head==NULL)
{ printf("list is empty\n");
  return head;
}
q=head;
while(q!=NULL)
{ if(item==q->data)
  break;
  q=q->next;
}
if(q==NULL)
{ printf("key not found\n");
 return head;
}
if(q==head)
{ printf("enter the item to insert towards the left of %d=",item);
  p=(n)malloc(sizeof(struct node));
  scanf("%d",&p->data);
  p->next=head;
  head->prev=p;
  p->prev=NULL;
  head=p;
  return head;
}
t=q->prev;
printf("enter the item to insert towards left %d=",item);
p=(n)malloc(sizeof(struct node));
scanf("%d",&p->data);
t->next=p;
p->prev=t;
q->prev=p;
p->next=q;
return head;
}
n deleteitem(int item,n head)
{ n p,q,t;
 if(head==NULL)
 { printf("list is empty\n");
   return head;
 }
q=head;
while(q!=NULL)
{if(item==q->data)
 break;
 q=q->next;
}
if(q==NULL)
{printf("item not found\n");
 return head;
}
t=q->prev;
if(t==NULL)
{ head=q->next;
  q->next->prev=NULL;
  return head;
}
p=q->next;
t->next=p;
p->prev=t;
return head;
}
void display(n head)
{ n q;
if(head==NULL)
{ printf("list is empty\n");
  return;
}
q=head;
do
{ printf("%d\n",q->data);
  q=q->next;
}while(q!=NULL);
}
void main()
{ n head=NULL;
  int sel,item;
  clrscr();
  while(1)
  { printf("1.Insertleft\n2.deleteitem\n3.insertfront\n4.display\n5.exit\n");
    printf("enter your choice\n");
    scanf("%d",&sel);
    switch(sel)
    { case 1:printf("Enter the key\n");
	     scanf("%d",&item);
	     head=insertleft(head,item);
	     break;
      case 2:printf("Enter the key\n");
	     scanf("%d",&item);
	     head=deleteitem(item,head);
	     break;
      case 3:printf("enter the item\n");
	     scanf("%d",&item);
	     head=insertfront(item,head);
	     break;
      case 4:display(head);
	     break;
      case 5:exit(0);
	     break;
      default:printf("invalid choice\n");
	      break;
      }

      getch();
      }
      }
