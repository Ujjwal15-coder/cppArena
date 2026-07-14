#include <iostream>
#include <vector>
using namespace std;
int func(int n,vector<int> &dp){
    if(n <= 1){
        return n;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    return dp[n] = func(n-1,dp) + func(n - 2,dp);  //Recursion to DP
}
int main() {
  int n;
  cin>>n;
  vector<int> dp(n + 1,-1);


  cout << "Output is: " << endl;
  cout << func(n,dp) << endl; 
  return 0;
}