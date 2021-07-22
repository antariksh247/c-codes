#include<iostream>
#define size 5
using namespace std;
class hash
{
public:
void init()
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

}

    void insert()
{
      int n,arr[15],i;
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
   }
   
   
   void disp()
   {
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
    
};  
   
   


int main()
{
int m,i;
char ch;
class hash h1;
        
do
{
        cout<<"CASE 1:-do you want to intilize all the chain elements to NULL\n";
        cout<<"CASE 2:- do you want to insert element in hash table\n";
        cout<<"CASE 3:- display the hash table\n";
        cin>>m;
 switch(m)
{
case 1:
        h1.init();
        break;
case 2:
        h1.insert();
    break;
case 3:
        h1.disp();
        break;
      default:
      cout<<"enter proper entry\n";
}
}while(ch==y||ch==Y);
cout<<"do you want to continue\n";
return 0;



}
