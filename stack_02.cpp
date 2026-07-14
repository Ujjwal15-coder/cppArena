#include <iostream>

using namespace std;

class stack {
    public:

    int *arr;
    int top;
    int size;

    stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;

    }


void push(int element){

    if (size - top > 1)
    {
        top++;
        arr[top] = element;

    }
    else{
        cout << "Stack is overflow" << endl;
    }
    

}

void pop(){
    if(top >= 0){
        top--;
    }
    else{
        cout << "Stack is underflow" << endl;
    }
}

int peek(){
    if(top >= 0){
        return arr[top];
    }
    else{
        cout << "Stack is empty" << endl;
        return -1;
    }

}

bool empty(){
    if(top == -1){
        cout << "Stack is empty" << endl;
        return true;
    }
    else{
        cout << "Stack is not empty" << endl;
        return false;
    }

}
};
int main(){

    stack st(5);

    st.push(22);
    st.push(33);
    st.push(44);

    cout << endl;
    cout << "Top most element " << st.peek() << endl;

    st.pop();

    cout << "After poping top most element " << st.peek() << endl;

    st.pop();

    cout << "After poping top most element " << st.peek() << endl;

    st.pop();

    cout << "After poping top most element --> " << st.peek() << endl;


    cout << st.empty() << endl;

    st.push(55);

    cout << st.empty() << endl;


}