/* SOLVED
#include <iostream>
using namespace std;
int main() {
  int a,b=1;
  a=10;
  if(++a){
    cout<<b;
  }
  else{
    cout<<++b;
  }
  return 0;
} */

#include <iostream>
using namespace std;
int main() {
  int a=1,b=2;
  if(a-->0&&++b>2)
  {
    cout<<"Stage1"<<endl;
  }
  else{
    cout<<"Stage2"<<endl;
  }
  cout<<"stage3"<<endl;
  return 0;

}

