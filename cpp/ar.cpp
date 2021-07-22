#include<iostream>
using namespace std;
int main()
{
int a[10],i,pos,element;
cout<<"enter element of array";
for (i=0;i<5;i++)
{
cin>>a[i];
}
cout<<"array is\n";
for (i=0;i<5;i++)
{
cout<<a[i]<<"\n";
}

cout<<"enter the position and elemet\n";
cin>>pos;
cin>>element;
for(i=6;i>pos;i--)
{
a[i]=a[i-1];
}
a[i]=element;
cout<<"modified array is";
for (i=0;i<6;i++)
{
cout<<a[i]<<"\n";
}
int dltpo=3;
for(i=dltpo;i<5;i++)
{
a[i]=a[i+1];

}
for (i=0;i<5;i++)
{
cout<<a[i]<<"\n";
}
return 0;
}
