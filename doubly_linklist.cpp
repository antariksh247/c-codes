#include<iostream>
#include<stdlib.h>

struct node
{
int data;
struct node* next;
};
struct node* createnode()
{
  int x;
  struct node* newnode=NULL;
  if(newnode==NULL)
  {
    std::cout<<"MEMORY ARE EMPTY";
  }
  else
  {
    std::cout<<"\nPLEASE ENTER THE DATA:-";
    std::cin>>x;
    newnode->data=x;
    newnode->next=NULL;
    return(newnode);
  }
}
void create_linklist(struct node** head_first, struct node** head_last)
{
struct node* newnode=NULL;
struct node* temp=NULL;
newnode=createnode();
temp=*head_first=*head_last;
if(temp==NULL)
{
  *head=newnode;
}
else
{
  while(temp->next!=NULL)
  {
    temp=temp->next;
  }
  temp->next=newnode;
}
}
void display_linklist(struct node* head)
{
  struct node* temp=head;
  if(temp==NULL)
  {
    std::cout<<"LINKLIST ARE EMPTY";

  }
  else
  {
    while(temp!=NULL)
    {
      std::cout<<head->data;
      temp=temp->next;
    }
  }
}
