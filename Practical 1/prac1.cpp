#include<stdio.h>
#include<stdlib.h>
//stdlib for exit function
#include<conio.h>
#define MAX 10
int top=-1,stack[MAX];
void push(); 
void pop();
void display();

int main()
{
int ch;

while(1)
{
printf("\n*** Stack Menu ***"); printf("\n\n1.Push\n2.Pop\n3.display\n4.exit"); printf("\n\nEnter your choice(1-4):"); scanf("%d",&ch);

switch(ch)
{
case 1: push(); 
break;
case 2: pop();
break; 
case 3: display();
break;
case 4: exit(0);
break;
default: printf("\nWrong Choice!!");
}
}
}

void push()
{
int val;

if(top==MAX-1)
{
printf("\nStack is full!!");
}
else
{
printf("Enter element to push:"); 
scanf("%d",&val);
top=top+1; //top=0
stack[top]=val;//stack[0]=10
}
}

void pop()
{
if(top==-1)
{
printf("Stack is empty!!");
}
else
{
 printf("Deleted element is %d",stack[top]); top=top-1;
}
}
void display()
{
int i;

if(top==-1)
{
printf("Stack is empty!!");
}
else
{
printf("\nStack is...\n");
for(i=top;i>=0;--i)
printf("%d\n",stack[i]);
}
}

