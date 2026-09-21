//copy constructor
//this constructor is called when the object is created


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

    teacher(string name,string dept,string subject,double salary){ 
        this -> name = name;
        this -> dept = dept;
        this -> subject = subject;
        this -> salary = salary;
    }

    teacher(teacher &orgObj){ 
        this -> name = orgObj.name;
        this -> dept = orgObj.dept;
        this -> subject = orgObj.subject;
        this -> salary = orgObj.salary;
    }

    //Methods/member functions

    void changeDept(string newDept){
        dept = newDept;
    }

    //setter function -> sets the value of a private member
    void setSalary(double s){
        this -> salary = s;
    }

    //getter function -> gets the value of a private member
    double getSalary(){
        return this -> salary;
    }

    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl; 
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }

};

int main() {
  teacher t1("Ujjwal", "Computer Science", "OOPS", 25000); //object of class teacher -> constructor is called automatically when the object is created

  teacher t2(t1); //copy constructor is called when the object is created
  t2.getInfo(); //calling the method to display the information of the teacher


}

