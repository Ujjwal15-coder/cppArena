//Polymorphism
//2. Run-time polymorphism is also known as dynamic polymorphism. It is achieved by virtual functions and function overriding. In this type of polymorphism, the function to be invoked is determined at run time.
//Overriding

/*


#include <iostream>
using namespace std;
class Parent{
    public:
        void func(){
            cout << "parent function \n" << endl;
        }

};

class Child : public Parent{
    public:
        void func(){
            cout << "Child function \n" << endl;
        }
};
int main() {
    Child c1;
    c1.func(); //child class overrides the parent class function and child class function will be called

    return 0;

}


*/

//Virtual Funtion

#include <iostream>
using namespace std;

class Parent{
    public:
        void func(){
            cout << "parent function \n" << endl;
        }

        virtual void hello(){
            cout << "Hello from parent class \n:" << endl;
        }
};

class Child : public Parent{
    public:
        void func(){
            cout << "Child function \n" << endl;
        }

        void hello(){
            cout << "Hello from child class \n:" << endl;
        }
};

int main(){
    Child c1;
    c1.hello();
}