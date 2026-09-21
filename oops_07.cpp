//Inheritance with parameterized constructor
#include <iostream>
using namespace std;

class person{
    public:
        string name;
        int age;

        person(string name, int age){
            this->name = name;
            this->age = age;
            cout << "Parent Constructor" << endl;
        }
};

class student : public person{
    public:
        int rollNO;

        student(string name, int age, int rollNO) : person(name, age){
            this->rollNO = rollNO;
            cout << "Child Constructor \n" << endl;
        }

        void getInfo(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Roll No: " << rollNO << endl;
        }
};

int main() {
    student s1("Ujjwal", 20, 101);
    s1.getInfo();

    return 0;
}


//with Non parameterized constructor
// #include <iostream>
// using namespace std;

// class person{
//     public:
//         string name;
//         int age;

//         person(){
//             cout << "Parent Constructor" << endl;
//         }
// };

// class student : public person{
//     public:
//         int rollNO;

//         student(){
//             cout << "Child Constructor \n" << endl;
//         }

//         void getInfo(){
//             cout << "Name: " << name << endl;
//             cout << "Age: " << age << endl;
//             cout << "Roll No: " << rollNO << endl;
//         }
// };

// int main() {
//     student s1;
//     s1.name= "Ujjwal";
//     s1.age = 20;
//     s1.rollNO = 101;

//     s1.getInfo();

//     return 0;
// }