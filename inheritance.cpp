#include<iostream>
#include<string.h>
class person
{
private:
  char name[20];
  int age;
public:
  person(const char* name="", int age=0)
  {
    strcpy(this->name,name);
    this->age=age;
  }
  const char* getName()
  {
    return this->name;
  }
  int getAge()
  {
    return this->age;
  }
  void display()
  {
    std::cout<<"NAME:"<<this->name<<std::endl<<"AGE:"<<this->age<<std::endl;
  }
};
class emp:public person
{
private:
  int id;
  float salary;
public:
  emp(const char* name="",int age=0,int id=0, float salary=0.0f):person(name,age)
  {
     this->id=id;
     this->salary=salary;
  }
  int getId()
  {
    return this->id;
  }
  int getSalary()
  {
    return this->salary;
  }
  void display()
  {
    person::display();
    std::cout<<"ID:"<<this->id<<std::endl<<"SALARY:"<<this->salary<<std::endl;
  }
};

int main()
{
  emp e("Mahesh",19,121,50000);
  e.display();
  return 0;
}
