#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 5
int top=-1,stack[MAX],temp[MAX], i=-1;
void push();
void pop();
void peep();
void change();
void display();

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
top=top+1; stack[top]=val;
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
printf("\nDeleted element is %d",stack[top]); top=top-1;
}
}
void display()
{
int i;

if(top==-1)
{
printf("\nStack is empty!!");
}
else
{
printf("\nStack is...\n");
for(i=top;i>=0;--i)
printf("%d\n",stack[i]);
}
}
// Peep operation....
void peep(){
    printf("\n\tTop : %d", top);//3
    printf("\n\tValue: %d",stack[top]);//stack[3]=40
}
void change(int i, int new_element){
    stack[top-i+1] = new_element;

}

int main()
{
int ch;
int item, row, new_element;

while(1)
{
printf("\n*** Stack Menu ***"); printf("\n\n1.Push\n2.Pop\n3.display\n4.peep\n5.change\n6.exit"); printf("\nEnter your choice(1-4):"); scanf("%d",&ch);
switch(ch)
{
case 1: push();
break;
case 2: pop();
break;
case 3: display();
break;
case 4:
	    peep();
	    break;
	case 5:
	    printf("\n\tEnter row no : ");
	    scanf("%d",&row);
	    printf("\n\tEnter new element: ");
	    scanf("%d", &new_element);
	    change(row, new_element );
	    break;
	case 6: exit(0);
break;
default: printf("\nWrong Choice!!");

}
}
getch();
}
