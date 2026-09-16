// #include <iostream>
// using namespace std;

// class student{
//     public:
//       string name;
//       double *cgpaptr;

//       student(string name,double cgpa){
//         this -> name = name;
//         this -> cgpaptr = new double(cgpa);
//       }

//       student(student &orgObj){
//         this -> name = orgObj.name;
//         this -> cgpaptr = orgObj.cgpaptr;
//       }

//       void getinfo(){
//         cout << "Name: " << name << endl;
//         cout << "CGPA: " << *cgpaptr << endl;
//       }
// };

// int main() {
//   student s1("Ujjwal", 8.5);

//   s1.getinfo();
//   student s2(s1); //copy constructor is called here

//   *(s2.cgpaptr) = 9.0; //changing the value of cgpa of s2 object

//   s1.getinfo(); //getting the info of s1 object with same name with cgpa of student s2 object -> due to shallow copy of cgpaptr pointer in copy constructor
//   return 0;
// }

//using deep copy constructor to avoid shallow copy of pointer in copy constructor
#include <iostream>
using namespace std;

class student{
    public:
      string name;
      double *cgpaptr;

      student(string name,double cgpa){
        this -> name = name;
        cgpaptr = new double;
        *cgpaptr = cgpa;
      }

      student(student &orgObj){
         this -> name = orgObj.name;
         cgpaptr = new double;
         
         *cgpaptr = *orgObj.cgpaptr;
       }

      void getinfo(){
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpaptr << endl;
      }
};

int main() {
  student s1("Ujjwal", 8.5);

  s1.getinfo();
  student s2(s1); //copy constructor is called here

  *(s2.cgpaptr) = 9.0; //changing the value of cgpa of s2 object

  s1.getinfo(); //getting the info of s1 object with same name with cgpa of student s2 object -> due to shallow copy of cgpaptr pointer in copy constructor
  s2.name = "Neha";
  s2.getinfo();
  return 0;
}