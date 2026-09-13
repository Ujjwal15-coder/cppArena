//Example of Encapsulation in C++

#include <iostream>
#include <string>
using namespace std;
class teacher { //class definition
private:
    //private members
    double salary; //data hiding -> salary is private and cannot be accessed outside the class used in Encapsulation

public:

    teacher(){ //non-parameterized constructor
        cout << "Hi, I am a constructor" << endl;
        dept = "Computer Science";
    }

    teacher(string n,string d,string s,double sal){
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

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

    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl; 
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }

};

int main() {
  teacher t1("Ujjwal", "Computer Science", "OOPS", 25000); //object of class teacher -> constructor is called automatically when the object is created
  t1.getInfo(); //calling the method to display the information of the teacher


}

