#include<iostream>
using namespace std;
class inte
{
private:
  int a;
  int b;
  int add;
public:
  void getdata()
  {

    cout<<"\nenter the data:";
    cin>>a>>b;
  }
  void setdata(int m, int n)
  {
    a=m;
    b=n;
  }
  void display()
  {
    cout<<"\ndisplay the data:";
    cout<<a<<endl<<b;
cout<<"\naddition is :";
cout<<add;
  }
  void addition()
  {
    add=a+b+a;
  }
};
int main()
{
  inte a1,a2,a3;
  a1.setdata(100,200);
  a1.addition();
  a1.display();


  a2.getdata();
  a2.addition();
  a2.display();

}
