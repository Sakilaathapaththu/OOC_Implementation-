#include <iostream>
#include <cstring>
using namespace std;

class person{
protected:
    char name[20];
public:
    void assignname(char n[]);
    void displayname();
};
void person::assignname(char n[]){
  strcpy (name,n);
}
void person::displayname(){
  cout<<"person name is :"<<name<<endl;
}

class child1:public person
{
  private:
      int age;
  public:
      void assignage(int a);
      void displayage();

};
void child1::assignage(int a){
  age=a;
}
void child1::displayage(){
  cout<<"age is :"<<age<<endl;
}



int main() 
{
   child1 c1;

    c1.assignage(21);
    c1.displayage();
    c1.assignname("sakila");
    c1.displayname();
}