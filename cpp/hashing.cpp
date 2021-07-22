#include<iostream>
#define size 5
using namespace std;
int main()
{
struct node
    {
    struct node *next;
    int data;
    };
 struct node *chain[size];
        int i;
        for(i=0;i<size;i++)
            {
            chain[i]=NULL;
            }

       // int value=[10,12,34,54,23,54,32];
       int n,arr[15];
       cout<<"ENETR SIZE OF ARRAY\n";
       
       cin>>n;
       for(i=0;i<n;i++)
       {
       cin>>arr[i];
       }
       
    for(int i=0;i<n;i++)
    {
        int value=arr[i];
   struct node *newnode=new node;
   newnode->data=value;
   newnode->next=NULL;
   int key=value % size;
    
            if(chain[key] == NULL)
             {
                chain[key]=newnode;
             }  
             else
             {
             struct node *temp=  chain[key];
             while(temp->next!=NULL)
                {
                    temp=temp->next;
                 }
                 temp->next = newnode;
              }
          
     }
     cout<<"to find the element\n";
     cout<<"which element you want to found\n";
     int value1;
     cin>>value1;
     int key=value1 % size;
     struct node *temp1=chain[key];
     while(temp1)
     {
     if (temp1->data==value1)
        {cout<<"found";
        }
        else
        {
        temp1=temp1->next;
        }
     }            
      
                 
    for(i=0;i<size;i++)
        {
        struct node *temp = chain[i];
        cout<<"chain ["<<i<<"]-->";
        while(temp!=NULL)
            {
            cout<<temp->data<<"-->";
            temp=temp->next;
            }
        
            cout<<"NULL\n";
    }
    }
    


