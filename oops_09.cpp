//Polymorphism

#include <iostream>
using namespace std;

class Student{
    public:
        string name;
        int age;

        Student(){
            cout << "Non parameterized constructor" << endl;
        }

        Student(string name, int age){
            this->name = name;
            this->age = age;
            cout << "Parameterized constructor" << endl;
        }

};

int main() {
//   Student s1; //default non-parameterized constructor will be called
  Student s2("John",20);
  
  return 0;
}