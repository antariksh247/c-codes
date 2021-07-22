//NAME: ANTARIKSH LABADE
// TE DIV: A
// ROLL NO: 80

#include<iostream>
using namespace std;
int main()
{
  int i,j,k,l;
  int fs;
  cout<<"\n***** CRC PROGRAMME ****";
  cout<<"\nENTER FRAME SIZE :";
  cin>>fs;
  int f[20];
  cout<<"ENTER THE FRAME :\n";
  for(i=0;i<fs;i++)
  {
    cin>>f[i];

  }
  int gs;
  cout<<"\nENTER GENERATOR SIZE :";
  cin>>gs;
  int g[20];
  cout<<"\nENTER GENERATOR :\n";
  for(i=0;i<gs;i++)
  {
    cin>>g[i];
  }
  cout<<"\nSENDER SIZE :";
  cout<<"\nFRAME :";
  for(i=0;i<fs;i++)
  {
    cout<<f[i];

  }
  cout<<"\nGENERATOR :";
  for(i=0;i<gs;i++)
  {
    cout<<g[i];

  }
  int rs=gs-1;
  cout<<"\n NO OF 0'S TO BE APPPENDED :";
  for(i=fs;i<fs+rs;i++)
  {
    f[i]=0;
  }
  int temp[20];
  for(i=0;i<20;i++)
  {
    temp[i]=f[i];

  }
  cout<<"\nMESSAGE AFTER APPPENDING 0'S :";
  for(i=0;i<fs+rs;i++)
  {
    cout<<temp[i];

  }
  for(i=0;i<fs;i++)
  {
    j=0;
    k=i;
    if(temp[k]>=g[j])
    {
      for(j=0,k=i;j<gs;j++,k++)
      {
        temp[k]=temp[k]^g[j];
    }
  }
}
int crc[15];
for(i=0,j=fs;i<rs;i++,j++)
{
  crc[i]=temp[j];
}
cout<<"\nCRC BITS:";
for(i=0;i<rs;i++)
{
  cout<<crc[i];
}
cout<<"\nTRANSMITTED FRAME :";
int tf[20];
for(i=0;i<fs;i++)
{
  tf[i]=f[i];
}
for(i=fs,j=0;i<(fs+rs);i++,j++)
{
  tf[i]=crc[j];

}
for(i=0;i<(fs+rs);i++)
{
  cout<<tf[i];
}
cout<<"\nRECIEVER SIDE :";
cout<<"\nRECIEVER FRAME :";
for(i=0;i<(fs+rs);i++)
{
  cout<<tf[i];
}
for(i=0;i<(fs+rs);i++)
{
  temp[i]=tf[i];
}
for(i=0;i<(fs+rs);i++)
{
  j=0;
  k=i;
  if(temp[k]>=g[j])
  {
    for(j=0,k=i;j<gs;j++,k++)
    {
      temp[k]=temp[k]^g[j];

     }
  }
}
cout<<"\nREMAINDER :";
int rrem[20];
for(i=fs,j<0;i<(fs+rs);i++,j++)
{
  rrem[j]=temp[i];
}
for(i=0;i<rs;i++)
{
  cout<<rrem[i];
}
int flag=0;
for(i=0;i<rs;i++)
{
    if(rrem[i]!=0)
     {
      flag=1;
    }
}
if(flag==0)
{
  cout<<"\nSINCE REMAINDER IS 0, HENCE MESSAGE TRANSMITTED FROM SENDER TO RECIEVER IS CORRECT.... ";
}
else
{
  cout<<"\nSINCE REMAINDER IS NOT 0, HENCE MESSAGE TRANSMITTED FROM SENDER TO RECIEVER IS NOT CORRECT.... ";
}
return 0;
}
