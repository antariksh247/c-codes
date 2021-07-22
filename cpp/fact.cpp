#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter the value";
cin>>n;
int fact=1;

for(int i=n;i>0;i--)
{
    fact=fact*i;        //5*4*3*2*1....1*2*3*4*5
}
cout<<fact;
}
