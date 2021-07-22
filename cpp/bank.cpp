#include<iostream>
using namespace std;
class bank
{
public:
int user[100],balance[100],amount,key,credit,debit,n;
int acc[100];
char name[100];
void admin()
    {
        cout<<"HOW MANY COUST You WANN ADD.\n";
        cin>>n;
        for(int i=1;i<=n;i++)
        {
       cout<<"ENTER NAME OF CUSTO.\n";
       cin>> name[i];
       cout<<"ACCOUT NO OF COSUT.\n";
       int a;
       cin>>a;
       acc[i]=a;
       balance[i]=100;
    }
    }
void deposit()
{
    cout<<"AMOUNT TO BE CREDIT\n";
    cin>>credit;
    cout<<"ENTER COUST. ACC. NO\n";
    cin>>key;
    for(int i=1;i<=n;i++)
    {
    if(acc[i]==key)
    {
    balance[i]= balance[i]+credit;
    }
    }
}
void withdraw()
{
cout<<"AMOUNT TO BE DEBITEED\n";
    cin>>debit;
    cout<<"ENTER COUST. ACC. NO\n";
    cin>>key;
    for(int i=1;i<=n;i++)
    {
    if(acc[i]==key)
         {
               if(balance[i]>=debit)
                {
                    balance[i]= balance[i]-debit;
                }
            else
            {
                cout<<"unsufficent balance\n";
            }
            }
    else
    {
    cout<<"provide correct info.";
    }
    }
}
    
void check()
{
for(int i=1;i<=n;i++)
{
cout<<acc[i]<<"\t";
cout<<name[i]<<"\t";
cout<<balance[i]<<"\n";

}
}
};
int main()
{
int ch;
bank b1;
cout<<"WELCOME TO XXX BANK OF KHLI\n";

char ch1;

do
{
cout<<"press 1 admin ** press 2 deposit ** press 3 withdraw 4 **check\n";
cin>>ch;
switch(ch)
{
    case 1:
        b1.admin();
        break;
    case 2:
        b1.deposit();
        break;
    case 3:
        b1.withdraw();
         break;
    case 4:
        b1.check();
         break;
}


cout<<"do you want to continue ** press 0 to cancel \n";
cin>>ch1;
}while(ch1=='y');
return 0;

}
