#include <iostream>
#include <cstring>
using namespace std;


class Animal
{
    protected:
        char name[20];
    public:
        Animal(char an[])
            {
              strcpy(name,an);
            }
        virtual void speak(){}; 
        void asong(){
              cout<<"Animal name is :"<<name<<endl;
              speak();
              cout<<endl;
          
        }
};

class cat:public Animal{
public:
    cat(char an[]):Animal(an){
      
    }
    void speak(){
      cout<<"Meow..Meow..Meow"<<endl;
    }
};

class dog:public Animal{
  public:
      dog(char an[]):Animal(an){
        
      }
      void speak(){
       cout<<"Bow..Bow..Bow"<<endl; 
      }
};
class cow:public Animal{
  public:
      cow(char an[]):Animal(an){
        
      }
      void speak(){
       cout<<"Moo..Moo..Moo"<<endl; 
      }
};

int main() {
  Animal *ani[3];
  ani[0]=new cat("Micky the cat");
  ani[1]=new dog("Bony the dog");
  ani[2]=new cow("roo");

  for(int a=0;a<3;a++){
    ani[a]->asong();
  }
  

  
}