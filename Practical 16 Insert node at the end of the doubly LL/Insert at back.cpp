#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct node
{ 	int num;
	struct node *next;
	struct node *prev; 
};

struct node *head=NULL,*temp, *first, *last;
int info;
void display();
void insert_at_begin();
void insert_at_end();

int main() {
	int i; 
	printf("program for insertion in a doubly linked list :\n");
	do {
		printf("\n1.Insert element at the begin of the linkedlist :");
		printf("\n2.Insert element at the end of the linkedlist :");
		printf("\n3.display"); printf("\n4.Exit\n");
		printf("\nEnter your choice :");
		scanf("%d",&i);
		switch(i) {
			case 1: insert_at_begin();
			break;
			case 2:
			insert_at_end();
			break; 
			case 3:
			display();
			break;case 4: exit(0);
		}
	} while(1);
}
void display() {
	struct node *ptr; ptr=head;
	printf("\nStatus of the doubly linked list is as follows :\n");
	while(ptr!=NULL) /* traversing the linked list */
	{ 
		printf("\n%d",ptr->num); ptr=ptr->next; 
	}
}
void insert_at_begin() {
		printf("Enter the value which do you want to insert at begining ");
		scanf("%d",&info);
		temp=(struct node *)malloc(sizeof(struct node));
		//(struct node)malloc(sizeof(NODE));
		temp->num=info; temp->next=NULL;
		temp->prev=NULL;
		if(head==NULL) { 
			head=temp; last=temp; 
		}
		else { 
			temp->next=head; head->prev=temp;
			temp->prev=NULL; head=temp;
 		}
}
 
void insert_at_end(){
 	struct node *ptr;
 	printf("Enter Elemnet to insert ");
 	scanf("%d",&info);
 	temp=(struct node *)malloc(sizeof(struct node));
 	temp->num=info;
 	temp->next=NULL;
 	temp->prev=NULL;
 	if(head==NULL){
 		head=temp;last=temp;
	}
	ptr=head;
	while(ptr->next!=NULL){
	 	ptr=ptr->next;
	}
	ptr->next=temp;
	temp->prev=ptr;
	temp->next=NULL;
 }
