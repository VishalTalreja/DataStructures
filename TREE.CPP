#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
  struct node *left;
  struct node *right;
  int data;
};
struct node *headTree=NULL;
void addNodeBinaryTree(int data,struct node *currentNode, struct node *parentNode)
{
  struct node *newNode;
  if(currentNode==NULL){
	if(data<=(parentNode->data)){
	newNode=(struct node*)malloc(sizeof(struct node));
	if(newNode==NULL)
	{
		printf("Memory allocation error..");
	}else{
		newNode->left=NULL;
		newNode->right=NULL;
		newNode->data=data;
		parentNode->left=newNode;
	}
	}else{
		newNode=(struct node*)malloc(sizeof(struct node));
		if(newNode==NULL)
		{
			printf("Memory allocation error..");
		}else{
			newNode->left=NULL;
			newNode->right=NULL;
			newNode->data=data;
			parentNode->right=newNode;
		}
	}
  }else{
	if(data<=(currentNode->data)){
		addNodeBinaryTree(data,currentNode->left,currentNode);
	}else{
		addNodeBinaryTree(data,currentNode->right,currentNode);
	}
  }
}
void addNode(int data)
{
  if(headTree==NULL)
  {
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    if(newNode==NULL)
    {
      printf("Memory allocation error..");
    }else{
      newNode->data=data;
      newNode->left=NULL;
      newNode->right=NULL;
      headTree=newNode;
    }
  }else{
    addNodeBinaryTree(data,headTree,NULL);
  }
}
void inorderDisplay(struct node* root)
{
  if(root!=NULL){
    inorderDisplay(root->left);
    printf("%4d",root->data);
    inorderDisplay(root->right);
  }
}
void preorderDisplay(struct node* root)
{
  if(root!=NULL){
    printf("%4d",root->data);
    preorderDisplay(root->left);
    preorderDisplay(root->right);
  }
}
void postorderDisplay(struct node* root)
{
  if(root!=NULL){
    postorderDisplay(root->left);
    postorderDisplay(root->right);
    printf("%4d",root->data);
  }
}
void displayTree(int mode)
{
  switch(mode){
  case 0:inorderDisplay(headTree);
  break;
  case -1:preorderDisplay(headTree);
  break;
  case 1:postorderDisplay(headTree);
  break;
  }
}
void main()
{
  clrscr();
  addNode(10);
  addNode(9);
  addNode(8);
  addNode(20);
  addNode(5);
  addNode(100);
  printf("Preorder Traversal: \n");
  displayTree(-1);
  printf("\nInorder Traversal: \n");
  displayTree(0);
  printf("\nPostorder Traversal: \n");
  displayTree(1);
  getch();
}
