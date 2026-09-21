//multiLevel inheritance , parent class, child class, grandchild class
/*
#include <iostream>
using namespace std;

class person{
    public:
        string name;
        int age;

        person(){
            cout << "Parent Constructor" << endl;
        }
};

class student : public person{
    public:
        int rollNO;

        student(){
            cout << "Child Constructor 1" << endl;
            
        }
};


class gradStudent : public student{
    public:
        int rollNO;

        gradStudent(){
            cout << "Child Constructor \n" << endl;
        }
};

int main() {
    gradStudent s1;
    s1.name = "Ujjwal";
    s1.age = 20;
    s1.rollNO = 101;

    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Roll No: " << s1.rollNO << endl;

    return 0;
}  */


//Multiple inheritance, parent class, Parent class,child class
/*
#include <iostream>
using namespace std;

class Student{
    public:
        string name;
        int age;

};

class Teacher{
    public:
        string subject;
        int salary;

};

class TeachingAssistant : public Student,public Teacher{

};

int main() {
    TeachingAssistant t1;
    t1.name = "Love Babbar";
    t1.age = 30;
    t1.subject = "C++";
    t1.salary = 100000;

    cout << "Name: " << t1.name << endl;
    cout << "Age: " << t1.age << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Salary: " << t1.salary << endl;
}  */


//Hierarchical inheritance, parent class, child class, child class

#include <iostream>
using namespace std;

class Person{
    public:
        string name;
        int age;
};

class Student : public Person{
    public:
        int rollNO;
};

class Teacher : public Person{
    public:
        string subject;
        int salary;
};

int main(){
    Student s1;
    s1.name = "Ujjwal";
    s1.age = 20;
    s1.rollNO = 101;

    Teacher t1;
    t1.name = "Love Babbar";
    t1.age = 30;
    t1.subject = "C++";
    t1.salary = 100000;

    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Roll No: " << s1.rollNO << endl;

    cout << "Name: " << t1.name << endl;
    cout << "Age: " << t1.age << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Salary: " << t1.salary << endl;
}
