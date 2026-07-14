// #include <iostream>
// #include <math.h>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//     int ans=0;
//     int i=0;
//     while(n!=0){
//       int bit=n&1;
//       ans=ans+bit*pow(10,i);
//       n=n>>1;
//       i++;
//     }
//     cout<<"al to binary is:"<<endl;
//     cout<<ans<<endl;
// }

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int n;
  string res ="";
  cout << "Enter the number: ";
  cin >> n;
  while(n > 0){
    if(n % 2 == 1){
      res += "1";
    }
      else{
        res += "0";
    }
     n = n/2;
     
  }
  reverse(res.begin(), res.end());
  cout << res << " ";
}
