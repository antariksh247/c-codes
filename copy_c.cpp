#include<iostream>
#include<stdlib.h>
class demo
{
public:
  int a;
  int b;
  int *p;
  demo()
  {

  }
  demo(int x, int y, int p)
  {
    this->a=x;
    this->b=y;
    this->p=(int*)malloc(sizeof(int));
    *(this->p)=p;
  }
  demo(demo& rhs)
  {
    this->a=rhs.a;
    this->b=rhs.b;
    this->p=(int*)malloc(sizeof(int));
    *(this->p)=*(rhs.p);
  }
  demo& operator=(demo& rhs)
  {
    this->a=rhs.a;
    this->b=rhs.b;
    this->p=(int*)malloc(sizeof(int));
    *(this->p)=*(rhs.p);
    return *this;
  }
void display()
{
  std::cout<<this->a<<std::endl<<this->b<<std::endl<<*(this->p)<<std::endl;
}

};
int main()
{
  demo d1(10,20,30);
  d1.display();
  demo d2(d1);
  (d2.a)++;
  d2.display();
  demo d3=d1;
  d3.display();
  demo d4;
  d4=d1;
  (d4.a)++;
  (d1.b)++;
  (*(d4.p))++;
  d4.display();
  d1.display();
  return 0;
}
