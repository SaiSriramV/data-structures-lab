#include<stdio.h>
#include<conio.h>
#include<process.h>
#define qsize 3
void enqueue(int [],int *);
void dequeue(int [],int *,int *);
void dispay(int [], int *);
void enqueue(int q[],int*r)
{ int item;
if(*r==(qsize-1))
printf("queue is full\n");
else
{ printf("enter the item to be inserted\n");
  scanf("%d",&item);
(*r)++;
  q[*r]=item;}
  }
void dequeue(int q[],int *f,int *r)
{ if((*f)>(*r))
printf("queue is empty\n");
else
{printf("the element deleted is: %d",q[*f]);
(*f)++;}}
void display(int q[],int *f,int *r)
{ int i;
if(*f>*r)
printf("nothing to display\n");
for(i=*f;i<=*r;i++)
{printf("%d  ",q[i]);
}
}
void main()
{ int q[qsize];
  int r=-1;
  int f=0;int sel;
  clrscr();
  while(1)
  { printf("1.enqueue\n");
    printf("2.dequeue\n");
    printf("3.display\n");
    printf("4.exit\n");
    printf("enter your choice\n");
    scanf("%d",&sel);
  switch(sel)
  { case 1:{ enqueue(q,&r);
	     break;}
    case 2:{ dequeue(q,&f,&r);
	     break;}
    case 3:{ display(q,&f,&r);
	     break;}
    case 4:{ exit(0);
	     break;}
    default: printf("wrong choice\n");
    }
    getch();
    }
    }


