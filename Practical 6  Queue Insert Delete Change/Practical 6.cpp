#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 5
int q[10],front=0,rear=-1;
int main()
{
int ch;
void insert();
void del();
void display();
	printf("\nQueue operations\n");
	printf(" 1.insert\n 2.delete\n 3.display\n 4.exit\n");
while(1)
{	
	printf("\nEnter your choice:");
	scanf("%d",&ch);
switch(ch)
{
	case 1:insert();
	break;
	case 2:del();
	break;
	case 3:display();
	break;
	case 4:exit(0);
	default:printf("Invalid option\n");
}
}
}
void insert()
{
	int x;
	if(rear==max-1)
		printf("Queue is overflow\n");
	else
	{
		printf("Enter element to be insert:");
		scanf("%d",&x);
	q[++rear]=x;
	}
}
void del()
	{
		int a;
		if((front==0)&&(rear==-1))
			printf("Queue is underflow\n");
		else{
		a=q[front++];
			printf("Deleted element is:%d\n",a);
	}
	
	if(front>rear)
	{
		front=0;
		rear=-1;
	}
}
void display()
{
	int i;
	if(front==0&&rear==-1)
	{
		printf("Queue is underflow\n");
	}
	for(i=front;i<=rear;i++)
		printf("\t%d",q[i]);
		printf("\n");
}
