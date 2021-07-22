#include<iostream>
using namespace std;
int main()
{
int i,n,index,a[10],value;
cout<<"SIZE OF ARRAY\n";
cin>>n;
cout<<"ENTER THE UNSORTED ARRAY\n";
for(i=0;i<n;i++)
{
cin>>a[i];
}
//cout<<"loading......\n";
for(i=1;i<n;i++)
{
value=a[i];
index=i;
while(index>0 && a[index-1]>value )
{
a[index]=a[index-1];
index--;
}
a[index]=value;
}
cout<<"sorted array is:-\n";
for(i=0;i<n;i++)
{
cout<<a[i]<<"\n";

}
}
