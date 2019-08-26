#include<stdio.h>
#include<conio.h>
#include<process.h>
void push(int[],int*);
void pop(int[],int*);
void display(int[],int*);
#define size 25
void push(int stack[],int *top)
{ int item=0;

  if(*top==size)
  printf("overflow\n");
  else
{ printf("enter the value\n");
scanf("%d",&item);
(*top)++;
stack[*top]=item;
}
  }
void pop(int stack[],int *top)
{ if(*top==-1)
printf("underflow\n");
else
{ printf("the element being popped is %d\n",stack[*top]);
(*top)--;
}
}
void display(int stack[],int *top)
{ int i;
if(*top==-1)
printf("underflow\n");
else
{ printf("STACK IS:\n");
for(i=(*top);i>=0;i--)
      printf("%d\n",stack[i]);
}}
void main()
{ int top=-1,stack[25],a;
clrscr();
while(1)
{ printf("1.push\n");
  printf("2.pop\n");
  printf("3.display\n");
  printf("4.exit\n");
  scanf("%d",&a);
  switch(a)
  { case 1: push(stack,&top);
	    break;
  case 2: pop(stack,&top);
		break;
	case 3: display(stack,&top);
		break;
	case 4: exit(0);
		break;
	default: printf("wrong choice\n");
	}
	getch();
}	}


