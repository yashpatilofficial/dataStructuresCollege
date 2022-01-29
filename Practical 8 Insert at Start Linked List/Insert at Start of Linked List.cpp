#include<stdio.h>
#include<stdlib.h>
void insert_beg();

void display();

struct node
{
int data;
struct node *next;
};

struct node *start=NULL;

int main()
{
	int ch;
	for(;;)//infinity loop
	{
		printf("\n ***LINKLIST MENU***");
		printf("\n\n1.insert_beg\n2.display\n3.exit");
		printf("\n\n enter your choice (1 2 or 3)- ");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:insert_beg();
		       break;
		case 2:display();
		       break;
		case 3:exit(0);
		default:printf("\nwrong coice!");
		       break;
			}
	}

}
void insert_beg()
{
	struct node *new_node;
	int val;
	new_node=(struct node*)(malloc(sizeof(struct node)));
		printf("Enter an element:");
		scanf("%d",&val);
	new_node->data=val;
	new_node->next=start;
	start=new_node;
}
 void display()
{
	struct node *ptr;
	ptr=start;
	while(ptr!=NULL)
{
	printf("\nelement is %d",ptr->data);
	ptr=ptr->next;
}
}

	
