#include<stdio.h>
#include<conio.h>
struct node{
  int data;
  struct node *next;
};

struct node *headStack=NULL;

void push(int data)
{
  struct node *newNode=(struct node*)malloc(sizeof(struct node));
  if(newNode==NULL)
  {
    printf("\nMemory Allocation Error!");
  }else{
    newNode->data=data;
    newNode->next=headStack;
    headStack=newNode;
  }
}

int pop()
{
  int data=-1;
  struct node *tempMemLoc;
  if(headStack==NULL)
  {
    printf("\nStack is already empty!");
  }else{
    data=headStack->data;
    tempMemLoc=headStack;
    headStack=headStack->next;
    free(tempMemLoc);
  }
  return data;
}

void display()
{
  struct node *tempHead=headStack;
  printf("\nStack Contents:\n");
  while(tempHead!=NULL)
  {
    printf("%4d",tempHead->data);
    tempHead=tempHead->next;
  }
}
void main()
{
  clrscr();
  push(1);
  push(2);
  push(3);
  push(4);
  push(5);
  display();
  printf("\nPopped Data: %4d",pop());
  printf("\nPopped Data: %4d",pop());
  display();
  push(100);
  push(200);
  display();
  getch();
}