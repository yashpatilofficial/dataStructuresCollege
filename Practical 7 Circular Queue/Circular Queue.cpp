#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 3
int q[3],front=-1,rear=-1;
int main()
{
int ch;
void insert(); 
void delet(); 
void display(); 

printf("\nCircular Queue operations\n");
printf("1.insert\n2.delete\n3.display\n4.exit\n");
while(1)
{
printf("Enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1: insert();
	break;
case 2: delet();
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
if((front==0&&rear==max-1)||(front>0&&rear==front-1))
printf("Queue is overflow\n");
else
{
printf("Enter element to be insert:"); scanf("%d",&x);
if(rear==max-1&&front>0)
{
rear=0; q[rear]=x;
}
else
{
if((front==-1&&rear==-1)||(rear!=front-1))
front=0;
rear=rear+1;
q[rear]=x;
}
}
}
void delet()
{
int a;
if((front==-1)&&(rear==-1))
{
printf("Queue is underflow\n");

exit(0);
}
a=q[front];//acess element from queue
if(front==rear)
{
rear=-1;
front=-1;
}
else
{
if(front==max-1)
front=0;
else
front=front+1;//deleting the element
}
printf("Deleted element is:%d\n",a);
}

void display()
{
int i,j; if(front==-1&&rear==-1)
{
printf("Queue is underflow\n"); 
exit(0);
}
if(front>rear)
{
for(i=0;i<=rear;i++) printf("\t%d",q[i]);
for(j=front;j<=max-1;j++) printf("\t%d",q[j]);
printf("\nrear is at %d\n",q[rear]); printf("\nfront is at %d\n",q[front]);
}
else
{
for(i=front;i<=rear;i++)
{
printf("\t%d",q[i]);
}
printf("\nrear is at %d\n",q[rear]); printf("\nfront is at %d\n",q[front]);
}
//printf("\n");
}
//


