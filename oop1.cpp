#include<iostream>
using namespace std;
class oop
{
private:
  int i;
public:
    void getdata()
    {
    cout<<"\nenter the i value:";
    cin>>i;
  }
  void setdata(int j)
  {
    i=j;
  }
  oop()
  {

  }
  oop(int j)
  {
    j=i;
  }
  void display()
  {
    cout<<"\ndisplay the value=";
    cout<<i;
  }
};
int main()
{
  oop o1(10),o2,o3;
  o1.display();
  o2.setdata(200);
  o2.display();
  o3.getdata();
  o3.display();
  return 0;
}
