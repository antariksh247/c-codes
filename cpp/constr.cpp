#include<iostream>
#include<cstring>
using namespace std;
class car
{
public:
int wheel;
int seat;
int mirror;
char name[10];

public:
car()
{
wheel=10;
cout<<"inside no paramaterized class\n";
}
car(int c,int a, int b, char *p)
{
wheel=c;
seat=a;
mirror=b;
strcpy(name,p);
}

void print()
{
cout<<"\n wheel\t"<<wheel;
cout<<"\n seat\t"<<seat;
cout<<"\n mirror\t"<<mirror;
cout<<"\n name\t"<<name<<"\n";
}


};


int main()
{
car c1(11,12,15,"audi");
car c2(c1);
c2.name[0]='l';
c1.print();
c2.print();

}
