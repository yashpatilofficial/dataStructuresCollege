#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*start=NULL,*q,*new_node;
// struct node *start=null;
int main()
{
    int ch;
    void insert_beg();
    //void insert_end();
   
    void display();
    void delete_beg();
    while(1)
    {
        printf("\n\n---- Singly Linked List(SLL) Menu ----");
        printf("\n1.Insert at beginning\n2.Delete at beginning\n3.Display\n4.Exit\n\n");
        printf("Enter your choice(1-4):");
        scanf("%d",&ch);	
	    
	//Switch
        switch(ch)
        {
            case 1: insert_beg();
                    break;
            case 2: delete_beg();
                    break;
	    case 3: display();
                    break;      
            case 4: exit(0);
		    break;
                    default: printf("Wrong Choice!!");
        }
    }
    return 0;
}
 
void insert_beg()
{
    int num;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&num);
    new_node->data=num;
 
    if(start==NULL)        //If list is empty
    {
        new_node->next=NULL;
        start=new_node;
    }
    else
    {
        new_node->next=start;
        start=new_node;
    }
}
 
 
void delete_beg()
{
    if(start==NULL)
    {
        printf("The list is empty!!");
    }
    else
    {
        q=start;
        start=start->next;
        printf("Deleted element is %d",q->data);
        free(q);
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
        q=start;
        printf("The linked list is:\n");
        while(q!=NULL)
        {
            printf("%d->",q->data);
              q=q->next;
        }
    }
}
