#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
	struct node* head;
void addList(int data)
{
	struct node *temp,*temp1;
	struct node *newnode=(struct node*)malloc(sizeof(struct node));

if(newnode==NULL)
{
	printf("Memory Error");
}
else
{
	newnode->data= data;
	newnode->next=NULL;
	if(head==NULL)
	{
	head=newnode;
	temp=newnode;
	}
	else
	{
	temp->next=newnode;
	temp1=newnode;
	temp1->data=data;
	temp1->next=NULL;
	temp=temp1;
	}

}
}
void printdata()
{
	while(head!=NULL)
	{
	printf("%d",head->data);
	head=head->next;
	}
}
void main()
{

	addList(1);
	addList(2);
	addList(3);
	printdata();
}

