#include <iostream>
#include <queue>
using namespace std;
int main() {
    queue<string> q; //First in first Out(FIFO)

    q.push("Calcium");
    q.push("Magnisium");
    q.push("Titanium");

    cout<<"Top of the queue--> "<<q.front()<<endl;
    q.pop();

    cout<<"After popping--> "<<q.front()<<endl;
    cout<<"Size of a Queue--> "<<q.size()<<endl;
    cout<<"Empty or Not--> "<<q.empty()<<endl; // 0 means false

  
}