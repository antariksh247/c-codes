#include<iostream>

class A
{
 public:
  double a;
public:
  A()
  {
    this->a=10;
  }
};
class B
{
 public:
  double b;
public:
  B()
  {
    this->b=20;
  }
};
class C
{
 public:
  double c;
public:
  C()
  {
    this->c=30;
  }
};
class D:public A, public B, public C
{
 public:
  double d;
public:
  D()
  {
    this->d=40;
  }
};
int main()
{
  D d1;
  A* aptr=&d1;
  B* bptr=&d1;
  C* cptr=&d1;
  std::cout<<"d1:"<<&d1<<std::endl;
  std::cout<<"aptr:"<<aptr<<std::endl;
  std::cout<<"bptr:"<<bptr<<std::endl;
  std::cout<<"cptr:"<<cptr<<std::endl<<std::endl<<std::endl;

  std::cout<<"A:"<<aptr->a<<std::endl;
  std::cout<<"B:"<<bptr->b<<std::endl;
  std::cout<<"C:"<<cptr->c<<std::endl<<std::endl<<std::endl;

  std::cout<<"A:"<<d1.a<<std::endl;
  std::cout<<"B:"<<d1.b<<std::endl;
  std::cout<<"C:"<<d1.c<<std::endl;
  std::cout<<"D:"<<d1.d<<std::endl;

  return 0;
}
