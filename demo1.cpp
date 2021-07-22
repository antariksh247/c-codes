#include<iostream>
class demo
{
public:
  int a;
  void fun()
  {
    std::cout<<"enter the value of a"<<std::endl;
    std::cout<<a<<std::endl;
  }
};
int main()
{
  demo d;
  d.fun();
}
