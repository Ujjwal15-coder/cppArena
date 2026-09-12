#include <iostream>
#include <queue>
using namespace std;
int main() {
   queue<int> q;

   q.push(10);
   q.push(20);
   q.push(30);

   cout << "The front element is: " << q.front() << endl;

   cout << "The back element is: " << q.back() << endl;

   cout << "The size of the queue is: " << q.size() << endl;

   q.pop();
   q.pop();

   cout << "size of queue after two pop operations: " << q.size() << endl;
 

   return 0;
}