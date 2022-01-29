#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void delete_last();
void insert_end();
void delete_first();
void display();

struct node {
int data;
struct node *next;
}*start=NULL;

int main(){
	int ch;
	while(1){
	printf("\n ***CIRCULAR LINKLIST MENU***");
	printf("\n\n1.insert_end\n2. delete last\n 3.delete first \n 4.Display\n 5.exit");
	printf("\n\n Enter your choice ");
	scanf("%d",&ch);
		switch(ch)
		{
		case 1:insert_end();
		break;
		case 2:delete_last();
		break;
		case 3:delete_first();
		break;
		case 4:display();
		break;
		case 5: exit(0);
		break;
		default:printf("\nwrong coice!");
		break;
		} 
	}
}
void insert_end() {
	int val;
	struct node *new_node,*ptr;
	new_node=(struct node*)(malloc(sizeof(struct node)));
	printf("Enter an element:");
	scanf("%d",&val);
	new_node->data=val;
		if(start==NULL) //If list is empty
		{
		start=new_node;
		}
		else
		{
		ptr=start;
		while(ptr->next!=start)
		{
		ptr=ptr->next;
		}
		ptr->next=new_node;
		}
		new_node->next=start;
		display();
	}
void display(){
	struct node *ptr;
	ptr=start;
	while(ptr->next!=start)
	{
		printf("\nelement is %d",ptr->data);
		ptr=ptr->next;
	}
	printf("\nelement is %d",ptr->data);
}
void delete_last(){
	struct node *ptr, *preptr;
		if(start==NULL)
		{
		printf("\nUNDERFLOW\n");
		}
		else if (start ->next == start)
		{
		start= NULL;
		free(start);
		printf("\nNode Deleted\n");
		}
		else
		{
		ptr = start;
		while(ptr ->next != start)
		{
		preptr=ptr;
		ptr = ptr->next;
		}
	preptr->next = ptr -> next;
	free(ptr);
	printf("\nNode Deleted\n");
	display();
	}
}

void delete_first(){
	struct node *prev=start,*first=start;
		if(start == NULL)
		{
			printf("list empty");
		}
		else if(prev->next == prev)
		{
			start=NULL;
		}
		else{
			while(prev->next != start)
			{
			prev=prev->next;
			}
	prev->next = first->next;
	start=prev->next;
	free(first);
	display();
	}
}
