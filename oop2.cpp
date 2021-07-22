#include<iostream>
using namespace std;
class oop
{
private:
  int data;
public:
  oop()
  {
    cout<<endl<<"inside constructer";

  }
  ~oop()
  {
    cout<<endl<<"destructor"<<endl;

  }
};
int main()
{
  oop o1;
  return 0;
}
