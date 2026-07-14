#include <iostream>
using namespace std;
int main() {
  int mask=0;
  int n;
  cout<<"Enter the number which has base 10"<<endl;
  cin>>n;
  if(n==0){
    return 1;
  }
  int m=n;
  while(m!=0){
    mask=(mask<<1)|1;     //Leetcode problem 2
    m=m >> 1;
  }
  int ans=(~n) & mask;
  cout<<"Now the compliment of the above Number is"<<endl;
  cout<<ans;
}