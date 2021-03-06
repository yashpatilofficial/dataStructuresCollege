#include<stdio.h>
//#include<process.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*start=NULL,*ptr,*new_node;
int main()
{
    int ch;
    void insert_end();
    void display();
    void del_before();

    while(1)
    {
	printf("\n---- Singly Linked List(SLL) Menu ----");
	printf("\n1.Insert at end\n2.Delete node before specific node\n3.Display\n4.Exit\n\n\t");
	printf("Enter your choice(1-4):");
	scanf("%d",&ch);

	switch(ch)
	{
	    case 1: insert_end();
		    break;
	    case 2: del_before();
		    break;

	    case 3: display();
		    break;
	    case 4: exit(0);
	    default: printf("Wrong Choice!!");
		    }
    }
}

void insert_end()
{
    int num;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("\tEnter data:");
    scanf("%d",&num);
    new_node->data=num;
    new_node->next=NULL;

    if(start==NULL)        //If list is empty
    {
		start=new_node;
    }
    else
    {
		ptr=start;
	while(ptr->next!=NULL)
		ptr=ptr->next;
		ptr->next=new_node;
    }
}


void display()
{
    if(start==NULL)
    {
		printf("List is empty!!");
    }
    else
    {
		ptr=start;
		printf("\tThe linked list is:\n\t");
	while(ptr!=NULL)
	{
	    printf("%d->",ptr->data);
	    ptr=ptr->next;
	}
    }
}
void del_before()
{
int info;
printf("Enter node info before you want to delete:");
scanf("%d",&info);
	struct node *t,*t2,*t3;
	t=start;
	if(info==start->data)
	{
		printf("\tNODE CANNOT BE DELETED\n");
	}
	else
	{
		if(info==start->next->data)
		{
			t3=start;
			start=start->next;
			free(t3);
		}
		else
		{
		while(t->next->next->data!=info && t->next->next!=NULL)
			{
				t=t->next;
			}
			if(t->next->next->data==info)
			{
				t2=t->next;
				t->next=t2->next;
				free(t2);
			}
		}
	}
}
