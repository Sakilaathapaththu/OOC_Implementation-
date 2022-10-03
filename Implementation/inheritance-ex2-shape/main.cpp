#include <iostream>
#include <cstring>
using namespace std;

class shape{
  protected:
      char name[20];
  public:
      shape(){
        cout<<"shape constructor called"<<endl;
      }
      shape(char sn[]){
        strcpy(name,sn);
      }
      //void assignname(char sn[]);
      void displayshape();
};

/*void shape::assignname(char sn[])
{
  strcpy(name,sn);
  
}*/
void shape::displayshape()
{
  cout<<"shape is :"<<name<<endl;
}

class rectangle:public shape{
private:
    int length;
    int width;
public:
    rectangle(){
      cout<<"rectangle constructor called"<<endl;
    }
    rectangle(char sn[],int l,int w):shape(sn){
        length=l;
        width=w;
    }
    //void assigndetails(int len,int wid);
    void display();
};
/*
void rectangle::assigndetails(int len,int wid)
{
  length=len;
  width=wid;
  
}*/
void rectangle::display()
{
  
  cout<<"length is :"<<length<<endl;
  cout<<"width is :"<<width<<endl;
  cout<<"area is :"<<(length*width)<<endl;
}

int main() {
  rectangle r1("rec",10,5), r2("rec2",20,6);
    //r1.assignname("rectangle");
    //r1.assigndetails(10,5);
    r1.displayshape();
    r1.display();
    r2.displayshape();
    r2.display();

  
}