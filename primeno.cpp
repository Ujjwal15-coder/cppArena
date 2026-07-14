#include <iostream>
using namespace std;
int main() {
  int n,num=2;
  cout<<"Enter the value of n ";
  cin>>n;
  while(num<n){
    if(n%num==0){
        cout<<"Not prime number "<<num<<endl;
    } 
    else {
        cout<<" Prime Number "<<num<<endl;
    }
    num=num+1;
  }


}