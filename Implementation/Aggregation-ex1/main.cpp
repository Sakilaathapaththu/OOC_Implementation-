#include <iostream>
#include <string>
using namespace std;

class Employee{
  private:
        string empid;
        string name;
  public:
      Employee(string eid,string n)      {
        empid=eid;
        name=n; 
      }
      void displayemployee()
      {
        cout<<"empid = "<<empid<<endl;
        cout<<"name = "<<name<<endl;
        cout<<"....................."<<endl;
        
      }
    ~Employee()
    {
      cout<<"deleting employee "<<empid<<endl;
    }
};

class Department
{
private:
  Employee *emp[2];
public:
  Department(){};
  void addEmployee(Employee *emp1, Employee *emp2)
{
emp[0] = emp1;
emp[1] = emp2;
} 
void displayDepartment(){
for(int i = 0; i < 2; i++)
emp[i]->displayemployee();
}
~Department(){cout << "Department shutting down" << endl;
  }
};
int main() {
  Department *ABC = new Department();
Employee *e1 = new Employee("E001", 
"Nimal");
Employee *e2 = new Employee("E002", 
"Jagath");
ABC->addEmployee(e1, e2);
ABC->displayDepartment();
//delete ABC;
  //e1->displayemployee();
e2->displayemployee();
delete e1;
 // delete e2;

  
Employee *e3 = new Employee("E003", 
"mahinda");
e3->displayemployee();
return 0;
}