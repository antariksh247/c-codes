#include<iostream>
using namespace std;
int main()
{
int i,j,n;
cout<<"enter the no\n";
cin>>n;
for(i=0;i<=n;i++)
{
for(j=0;j<=n/5;j++)
{
if(i*j==n)
    cout<<i<<"\t and\t"<<j<<"\n";
}

}
return 0;
}
