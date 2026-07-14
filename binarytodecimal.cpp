// #include <iostream>
// #include <math.h>
// using namespace std;
// int main() {
//   int n;
//   cout<<"Enter the binary number"<<endl;
//   cin>>n;
//   int i=0;
//   int ans=0;
//   while(n!=0){ 
//     int digit=n%10; // get the last digit of the number
//     if(digit==1){ // if the digit is 1 then add 2^i to the answer
//         ans=ans+(pow(2,i));
//     }
//     n=n/10; // remove the last digit of the number
//     i++; 
//   }
//   cout<<"Binary to al is: "<<endl<<ans<<endl; // print the al number

//   return 0; 
// }  

#include <iostream>
#include <math.h>
using namespace std;
int main() {
  string x;;
  cout << "Enter the binary number" << endl;
  cin >> x;
  int n = x.length();
  int ans = 0;
  int power = 0;
  for(int i = n - 1; i >= 0; i--){
    if(x[i] == '1'){
      ans = ans + pow(2,power);
    }
    power++;
  }

  cout << "Binary to al is: " << endl << ans << endl; // print the al number

  return 0;
}