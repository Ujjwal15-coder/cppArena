#include <iostream>
using namespace std;
void sum1(int i,int sum){
    if(i < 1){
        cout << sum;
        return;
    }
    sum1(i-1,sum+i);
}
int main() {
  int n;
  cout << "Enter the value of n" << endl;
  cin >> n;

  sum1(n,0);
  return 0;
}