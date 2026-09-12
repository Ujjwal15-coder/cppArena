//Example of Encapsulation in C++

#include <iostream>
#include <string>
using namespace std;
class teacher { //class definition
private:
    //private members
    double salary; //data hiding -> salary is private and cannot be accessed outside the class used in Encapsulation

public:
    //properties/attributes
    string name;
    string dept;
    string subject;

    //Methods/member functions

    void changeDept(string newDept){
        dept = newDept;
    }

    //setter function -> sets the value of a private member
    void setSalary(double s){
        salary = s;
    }

    //getter function -> gets the value of a private member
    double getSalary(){
        return salary;
    }

};

int main() {
  teacher t1; //object of class teacher
  t1.name = "Ujjwal";
  t1.dept = "CSE";
  t1.subject = "OOPS";
  t1.setSalary(25000);

  cout << t1.name << endl;

  t1.changeDept("ECE");
  cout << t1.dept << endl;

  cout << t1.getSalary() << endl;



}