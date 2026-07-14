#include <iostream>
using namespace std;
int main() {
  int amount;
  cout<<"Enter the amount of money you have"<<endl;
  cin>>amount;
  int num=1;
  int note=0;
   switch(num) {
    case 1:
    note=(amount)/100;
    amount=amount-(100*note);
    cout<<note<<" note of 100 Rs"<<endl;
    
    case 2 :
    note=(amount)/50;
    amount=amount-(50*note);
    cout<<note<<" note of 50 Rs"<<endl;

    case 3:
    note=(amount)/20;
    amount=amount-(20*note);
    cout<<note<<" note of 20 Rs"<<endl;

    case 4:
    note=(amount)/10;
    amount=amount-(10*note);
    cout<<note<<" note of 10 Rs";
    break;

    default :
    cout<<"No require notes"<<endl;

  }
  return 0;
}