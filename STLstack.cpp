#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<string> s; //Last in first out{LIFO}
    s.push("Love");
    s.push("Babbar");
    s.push("Codehelp");
    cout<<"Top element of the stack--> "<<s.top()<<endl;

    s.pop();

    cout<<"Top element of the stack--> "<<s.top()<<endl;
    cout<<"Size of the stack--> "<<s.size()<<endl;
    cout<<"Empty or not--> "<<s.empty()<<endl;
  
  
}