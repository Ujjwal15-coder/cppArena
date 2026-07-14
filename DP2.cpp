#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;


    int prev2 = 0,prev1 = 1; //start from base cases
    for(int i = 2; i <= n;i++){ //Recurssion to Tabulation
        int curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    cout << prev1 << " ";  //TC --> O(n)  SC --> O(1)

  
  return 0;
}