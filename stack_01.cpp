#include<iostream>
#include<stack>

using namespace std;
int main(){

    stack<int> s;

    s.push(2);
    s.push(3);
    s.push(4);

    //
    s.pop();

    cout << "The top most element is: " << s.top() << endl;

    cout << s.empty() << endl;

    if(s.empty()){
        cout << "Stack is empty" << endl;
    }
    else{
        cout << "Stack is not empty" << endl;
    }
}