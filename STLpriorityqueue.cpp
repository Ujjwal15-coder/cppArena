#include <iostream>
#include <queue>
using namespace std;
int main() {

    //max heap
    priority_queue<int> max;

    //min heap
    priority_queue<int,vector<int>,greater<int> > min;

    max.push(2);
    max.push(9);
    max.push(1);
    max.push(7);
    
    cout<<"Size--> "<<max.size()<<endl;
    int n=max.size();
    for(int i=0;i<n;i++){
        cout<<max.top()<<" "; //arranged in max heap
        max.pop();
    }cout<<endl;

    min.push(2);
    min.push(9);
    min.push(1);
    min.push(3);
    min.push(6);
    min.push(0);

    cout<<"Size--> "<<min.size()<<endl;
    int m=min.size();
    for(int i=0;i<m;i++){
        cout<<min.top()<<" "; //arranged in min heap
        min.pop();
    }
}