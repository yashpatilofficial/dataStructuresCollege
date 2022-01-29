#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void display();
void insert_beg();
void insert_end();
struct node
{
	int data;
	struct node *next;
}*start=NULL,*new_node,*ptr;
int main()
{
	int i;
	printf("***LINKED LIST MENU***");
	while(1)
	{
		printf("\n\n1.Insert beg\n2.Insert end\n3.Display\n4.Exit");
		printf("\n\nEnter your choice:");
		scanf("%d",&i);
		switch(i)
		{
			case 1:insert_beg();
			break;
			case 2:insert_end();
			break;
			case 3:display();
			break;
			case 4:exit(0);
			break;
			default:printf("\nWrong choice");
			break;
		}
	}

}
void display()
{
   if(start==NULL)
   printf("\nLinked list empty");
   else
   {    puts("\nELEMENTS ARE:");
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d->",ptr->data);
		ptr=ptr->next;
	}
   }
}
void insert_beg()
{
	int value;
	printf("\nEnter the value:");
	scanf("%d",&value);
	new_node=(struct node*)(malloc(sizeof(struct node)));
	new_node->data=value;
	new_node->next=start;
	start=new_node;
}
void insert_end()
{
	int value;
	ptr=start;
	printf("\nEnter the element:");
	scanf("%d",&value);
	new_node=(struct node*)(malloc(sizeof(struct node)));
	new_node->data=value;
	new_node->next=NULL;
	if(start==NULL)
	start=new_node;
	else
	{
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=new_node;
	}
}
