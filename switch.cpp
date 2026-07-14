#include <iostream>
using namespace std;
int main() {
  int num=1;
  char ch='1';
  switch(num){
    case 1:
    cout<<"First number"<<endl;
    break; //if break is not used it print the case'1' also unless it jumps out the switch block
    case '1':
    cout<<"First one character"<<endl;
    break;

    default:
    cout<<"Invalid choice"<<endl;
  }
  return 0;
}