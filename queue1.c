#include<stdio.h>
#include <stdlib.h>


struct Node
{
   int data;
   struct Node *next;
}*front = NULL,*rear = NULL;

void insert(int);
void delete();
void display();
void insert(int value)
{
   struct Node *ptr;
   ptr=(struct Node*)malloc(sizeof(struct Node));
   ptr->data=value;
   ptr->next=NULL;
   if(front ==NULL)
      front=rear=ptr;
   else
   {
      rear ->next=ptr;
      rear=ptr;
   }
   printf("Insertion Success\n");
}
void delete()
{
   if(front==NULL)
   {
      printf("Queue is empty\n");
   }
   else
   {
      struct Node *tmp=front;
      front=front->next;
      free(tmp);
   }  
}
void display()
{
   if(front==NULL)
      printf("Empty\n");
   else
   {
      struct Node *tmp=front;
      while(tmp->next!=NULL)
      {printf("%d ",tmp->data);
      tmp=tmp->next;
      }
      printf("%d\n",tmp->data);
   }
}
int main()
{
   int choice, value;
   //clrscr();
   printf("\n:: Queue Implementation using Linked List ::\n");
   while(1){
      printf("\n****** MENU ******\n");
      printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the value to be insert: ");
		 scanf("%d", &value);
		 insert(value);
		 break;
	 case 2: delete(); break;
	 case 3: display(); break;
	 case 4: exit(0);
	 default: printf("\nWrong selection!!! Please try again!!!\n");
      }
   }
}
