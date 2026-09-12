#include<iostream>
#include<deque>
using namespace std;

int main(){
    //implementation of doubly ended queue using deque container

    deque<int> d;
  
    d.push_front(10);
    d.push_back(20);

    cout << "The front element is :" << d.front() << endl;
    cout << "The back element is :" << d.back() << endl;

    d.pop_front();

    cout << "After pop front, the front element is:" << d.front() << endl;
    cout << "After pop front, the back element is:" << d.back() << endl;

    d.pop_back();

    cout << "After pop back, the size of deque is:" << d.size() << endl;

    if(d.empty()){
        cout << "Deque is empty" << endl;
    } else {
        cout << "Deque is not empty" << endl;
    }

    return 0;
}