#include <iostream>
using namespace std;
int main() {
  int a=4;
  int b=3,b1,b2,b3,b4;
  cout<<"a&b "<<(a&b)<<endl;
  cout<<"a|b "<<(a|b)<<endl;
  cout<<"~a "<<(~a)<<endl;
  cout<<"a^b "<<(a^b)<<endl;

  cout<<(12<<3)<<endl;
  cout<<(12>>3)<<endl;

  b1=++a;
  b2=a--;
  b3=--a;
  b4=a++;
  cout<<b1<<endl;
  cout<<b2<<endl;
  cout<<b3<<endl;
  cout<<b4<<endl;
  cout<<a<<endl;
}