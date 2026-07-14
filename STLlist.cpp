#include <iostream>
#include <list>
using namespace std;
int main() {
  list<int> l;

  list<int> s(5,100);
  for(int i:s){
    cout<<i<<" ";
  }
  cout<<endl;
  
  l.push_back(5);
  l.push_front(3);

  for(int i:l){
    cout<<i<<" ";
  }
  cout<<endl;
  l.erase(l.begin()); //Deleting first element
  cout<<"After Erase ";

  for(int i:l){
    cout<<i<<" ";
  }
}