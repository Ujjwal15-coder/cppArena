//Polymorphism

//1. Compile-time polymorphism is also known as static polymorphism. It is achieved by function overloading or constructor overloading and operator overloading. In this type of polymorphism, the function to be invoked is determined at compile time.

//function overloading

#include <iostream>
using namespace std;
class Print{
    public:
        void show(int x){
            cout << "Integer: " << x << endl;
        }

        void show(char ch){
            cout << "Character: " << ch << endl;    
        }
};
int main(){
    Print p;
    p.show(5);
    p.show('A');
    return 0;
}