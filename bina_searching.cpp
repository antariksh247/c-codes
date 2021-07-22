#include<iostream>
using namespace std;
class binary
{
    public:
    int i,j;
    int left=0;
    int right=0;

    void sorting(int a[],int n)
    {
    int temp;
     for(i=0;i<n;i++)
     {
         for(j=0;j<i;j++)
         {
         if(a[i]<a[j])
         {
           temp=a[i];
           a[i]=a[j];
           a[j]=temp;
         }
         }
     }
     cout<<"Sorting array are:-"<<endl;
     for(i=0;i<n;i++)
     {
         cout<<a[i]<<endl;
     }
    }

    void search(int a[],int n, int key)
    {
        sorting(a,n);
    for(i=0;i<n;i++)
    {

    }

    

    }
};
int main()
{
    int i,a[200],key,n;
    cout<<"How many number you want to enter:-";
    cin>>n;
    cout<<"Enter the Array:-"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
   cout<<"Enter the key:-";
   cin>>key;
 binary b1;
 b1.search(a,n,key);  
}