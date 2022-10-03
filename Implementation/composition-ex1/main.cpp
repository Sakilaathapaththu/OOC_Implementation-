#include <iostream>
#include <string>
#define SIZE 2
using namespace std;

class Classroom{
private:
    int roomno;
public:
    Classroom(int rno)
    {
      roomno=rno;
    }
    void display()
    {
      cout<<"Class room is :"<<roomno<<endl;
    }
~Classroom()
  {
    cout<<"Deleting room"<<roomno<<endl;
  }
};

class university{
private:
    Classroom *room[SIZE];
public:
    university(int no1,int no2)    {
      room[0]=new Classroom(no1);
      room[1]=new Classroom(no2);
      
    }
    void displayclassroom()
    {
      for(int a=0;a<2;a++)
        {
          room[a]->display();
        
        }
    }
    ~university(){
      for(int a=0;a<2;a++){
        delete room[a];
        cout<<"everthing is delete"<<endl;
      }
    }
};


int main() {
  university *uni1;
  uni1=new university(101,102);
  uni1->displayclassroom();
  delete uni1;

return 0;
}