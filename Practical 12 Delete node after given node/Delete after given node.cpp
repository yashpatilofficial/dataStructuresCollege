#include<stdio.h>
#include<conio.h>
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
    void del_after();

    while(1)
    {
	printf("\n---- Singly Linked List(SLL) Menu ----");
	printf("\n1.Insert at end\n2.Delete node after specific node\n3.Display\n4.Exit\n\n");
	printf("Enter your choice(1-4):");
	scanf("%d",&ch);

	switch(ch)
	{
	    case 1: insert_end();
		    break;
	    case 2: del_after();
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
    printf("Enter data:");
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
	printf("The linked list is:\n");
	while(ptr!=NULL)
	{
	    printf("%d->",ptr->data);
	    ptr=ptr->next;
	}
    }
}
void del_after()
{
int info;
printf("Enter node info after you want to delete:");
scanf("%d",&info);
	struct node *t,*ptr,*t1;
	ptr=start;
	if(info==start->data)
	{
		t=start->next;
		start->next=t->next;
		free(t);
	}
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;

	if(ptr->data==info)
	{
		t1=ptr->next;
		if(t1->next==NULL)
		{
				ptr->next=NULL;
		}
		else
		{
			ptr->next=t1->next;
		}
		free(t1);
		}
	
}


}

