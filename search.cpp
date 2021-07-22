#include<iostream>
using namespace std;

class search1
{
    public:
  
    void search(int a[],int n, int key)
    {
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            cout<<"KEY ARE FOUND IN "<<i<<" index :-"<<key<<endl;
        }

    }
    }
};
int main()
{
    int a[20];
    int key;
    int n;
    cout<<"how many the number:-"<<endl;
    cin>>n;
    cout<<"Enter the Array:-"<<endl;

      for(int i=0;i<n;i++)
        {
         cin>>a[i];
        }
     cout<<"Enter the key:-"<<endl;
     cin>>key;
    search1 s;
    s.search(a,n,key);
}