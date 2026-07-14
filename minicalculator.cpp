#include <iostream>
using namespace std;
int main() {
  int a;
  cout<<"Enter the first number"<<endl;
  cin>>a;
  int b;
  cout<<"Enter the second number"<<endl;
  cin>>b;
  char op;
  cout<<"Enter the operator"<<endl;
  cin>>op;

  switch(op){
    case '+' :
    cout<<"The sum of "<<a<<" and "<<b<<" is "<<(a+b)<<endl;
    break;

    case '-' :
    cout<<"The subtraction of "<<a<<" and "<<b<<" is "<<(a-b)<<endl;      
    break;

    case '*' :
    cout<<"The multiplication of "<<a<<" and "<<b<<" is "<<(a*b)<<endl;
    break;
    case '/' :
    cout<<"The division of "<<a<<" and "<<b<<" is "<<(a/b)<<endl;
    break;
    case '%' :
    cout<<"The modulus of "<<a<<" and "<<b<<" is "<<(a%b)<<endl;
    break;

    default:
    cout<<"Invalid operator"<<endl;
  }
  return 0;
}