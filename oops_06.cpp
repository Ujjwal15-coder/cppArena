//destructor is used to free the memory allocated by the constructor

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

        ~student(){
            cout << "Hi, I am destructor of student class , delete everything" << endl;
            delete cgpaptr; //free the memory allocated by the constructor
        }

        void getInfo(){
            cout << "Name:" << name << endl;
            cout << "CGPA:" << *cgpaptr << endl;
        }
};
int main() {
        student s1("Ujjwal" ,8.5);
        s1.getInfo();

        return 0;

}