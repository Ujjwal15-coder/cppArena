//set always stores unique elements
#include <iostream>
#include <set>
using namespace std;
int main() {
  set<int> s;
  s.insert(5); //O(1)
  s.insert(5);
  s.insert(6);
  s.insert(6);
  s.insert(6);
  s.insert(2);
  s.insert(1);

  for(auto i:s){
    cout<<i<<endl;
  }cout<<endl;

  set<int>::iterator it=s.begin();
  it++;

  s.erase(it); //erase the second element
  for(auto i:s){
    cout<<i<<endl;
  }cout<<endl;

  cout<<"5 is present or not--> "<<s.count(5); //1 means yes or True

  set<int>::iterator itr=s.find(1); //o(logn)
  for(auto it=itr;it!=s.end();it++){
    cout<<*it<<endl;
  }cout<<endl;

}