#include<iostream>
using namespace std;
int main()
{
int i,j;
int a[15],n;
cout<<"enter the size of arra\n";
cin>>n;
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"LOADING........selection sort \n";


for(i=0;i<n-1;i++)
{
    for(j=i+1;j<n;j++)
        {
        if(a[i]>a[j])
        {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        }
        }
}
for(i=0;i<n;i++)
{
cout<<a[i]<<"\n";
}



}
