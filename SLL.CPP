//Singly Linked List
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *next;
};

struct node *HEAD=NULL;
void addToList(int data){
  struct node *newNode=(struct node*)malloc(sizeof(struct node));
     struct node *temp=HEAD;
  if(newNode==NULL){
    printf("Memory allocation failed");
  }else{
    newNode->data=data;
    newNode->next=NULL;
    //Linked List is empty
    if(HEAD==NULL){
      HEAD=newNode;
    }else{
     while(temp->next!=NULL){
       temp=temp->next;
     };
     temp->next=newNode;
    }
  }
}
void printList(){
  struct node *temp;
  temp=HEAD;
  if(HEAD==NULL){
    printf("Linked List is empty");
  }else{
   printf("Linked List content: \n");
    do{
      printf("%4d",temp->data);
      temp=temp->next;
    }while(temp!=NULL);
  }
}
void main(){
clrscr();
printf("size of struct node: %d",sizeof(struct node));
printf("size of data node: %d",sizeof(int));
getch();
clrscr();

addToList(1);
addToList(2);
addToList(3);
printList();
getch();
}