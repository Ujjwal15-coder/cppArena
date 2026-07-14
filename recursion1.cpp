/* #include <iostream>
using namespace std;
int cnt = 0;
void print(){
    if(cnt == 5) return; //Base case
    cout << cnt << " "; //" " is used to print in same line and endl is used to print in new line
    cnt++;
    print();

}
int main() {
    cout << "Printing numbers from 0 to 4 using recursion: ";
    print();
  
  return 0;
} */


 // Print numbers from 1 to n using recursion
 
/* #include <iostream>
using namespace std;

void num(int i,int n){
    if (i > n )
    return;
    cout << i << endl; //it prints --> 1,2,3,4,...till (n-1) 
    num(i+1,n); 
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    num(1,n);

return 0;
} */


// Print numbers from 1 to n using BackTracking
/* #include <iostream>
using namespace std;

void num(int i,int n){
    if(i < 1) return;
    num(i - 1,n);
    cout << i << endl;
}
int main() {
  int n;
    cout << "Enter a number: ";
    cin >> n;
    num(n,n);
  return 0;
} */

// Print numbers from n to 1 using recursion

/* #include <iostream>
 using namespace std;
void num(int i,int n){
    if(i < 1) return;
    cout << i << endl;
    num(i - 1,n);
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    num(n,n);
return 0;
} */

// Print numbers from n to 1 using BackTracking

/* #include <iostream>
using namespace std;
void num(int i,int n){
    if (i > n) return;
    num(i + 1,n);   // BackTracking
    cout << i << endl; // Print after the function call
}
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    num(1,n);
  
  return 0;
} */



//parametrized recursion

// Print sum of first n natural numbers using recursion

/* #include <iostream>
using namespace std;
void sum1(int i,int sum){
  if(i < 1){
    cout << sum << endl;
    return;
  }
  sum1(i - 1,sum + i);

}
int main() {
  
  int n = 3;
  cout << "Sum of first " << n << " natural numbers is: ";
  sum1(n,0);

  return 0;
} */

//factorial of a number using parametrized recursion
#/* include <iostream>
using namespace std;
void fact1(int n,int ans){
  if(n == 0){
    cout <<ans<< endl;
    fact1(n - 1,ans * n);
  }
}
int main() {
  int n;
  cout << "Enter a number to find its factorial: ";
  cin >> n;
  fact1(n,1);
  
  return 0;
} */


//functional recursion

// Print sum of first n natural numbers using recursion

/* #include <iostream>
using namespace std;
int sum2(int n){
  if(n == 0)
  return 0;
return n + sum2(n - 1); 
  
}
int main(){
  int n = 3;
  cout<< "Sum of " << n << " natural numbers is " << sum2(n);
  return 0;
} */


//factorial of a number using functional recursion

/* #include <iostream>
using namespace std;
int fact(int n){
  if(n == 0) return 1;
  return n * fact(n - 1);
}
int main() {
  int n;
  cout << "Enter a number to find its factorial: ";
  cin >> n;
  cout << "Factorial of " << n << " is " << fact(n);
  return 0;
} */


//Reverse an array using single variable recursion
/* #include <iostream>
using namespace std;
void revArr(int i,int arr[],int n){
  if(i >= n/2) return;
  swap(arr[i],arr[n - i - 1]);
  revArr(i + 1,arr,n);
}
int main() {
  int n;
  cout << "Enter size of array: ";
  cin >> n;
  int arr[n];
  cout << "Enter elements of array: ";
  for(int i = 0; i< n;i++){
    cin >> arr[i];
  }
  revArr(0,arr,n);
  cout << "Reversed array is: ";
  for(int i = 0; i< n;i++){
    cout << arr[i] << " ";
  }
  
  return 0;
} */

//Reverse an array using two variable recursion

/* #include <iostream>
using namespace std;
void revArr2(int l,int r,int arr[],int n){
  if(l >= r) return;
  swap(arr[l],arr[r]);
  revArr2(l + 1,r - 1,arr,n);
}
int main() {
  int n;
  cout << "Enter size of array: ";
  cin >> n;
  int arr[n];
  cout << "Enter elements of array:";
  for(int i = 0; i< n;i++){
    cin >> arr[i];
  }
  revArr2(0,n - 1,arr,n);
  cout << "Reversed array is: ";
  for(int i = 0; i< n;i++){
    cout << arr[i] << " ";
  }
  
  return 0;
} */

//Check a string is palindrome or not using recursion
/* #include <iostream>
using namespace std;
bool isPalindrome(int i,string &s){
  if(i >= s.length()/2) return true;
  if(s[i] != s[s.length()-i-1]) return false;
  return isPalindrome(i + 1,s);
}
int main() {
  string s;
  cout << "Enter a string: ";
  cin >> s;
  cout << isPalindrome(0,s);
  
  return 0;
} */

//multiple recursion calls

/* #include<iostream>
using namespace std;
int fibonacci(int n){
  if(n <= 1) return n;
  int last = fibonacci(n - 1);
  int secondLast = fibonacci(n - 2);
  return last + secondLast;
  // return fibonacci(n - 1) + fibonacci(n - 2);  can also be written like this
}
int main(){
  int n;
  cout << "Enter a number: ";
  cin >> n;
  cout << fibonacci(n);
  return 0;
} */ 


// Print all possible subsequences of an array using recursion---> Important question 
#include <bits/stdc++.h>
using namespace std;
void printSubsequences(int index,vector<int>& ds,int arr[],int n){
  //base case
  if(index == n){
    for(auto it: ds){  ///printing the subsequence
      cout << it << " ";
    }
    if(ds.size() == 0){ 
      cout << "{}";
    }
    cout << endl;
    return;
  }
  //take or pick the element
  ds.push_back(arr[index]);
  printSubsequences(index + 1,ds,arr,n);
  //not take or not pick the element
  ds.pop_back();

  //not take or not pick the element
  printSubsequences(index + 1,ds,arr,n);

}
int main() {
  int n;
  cout << "Enter size of array: ";
  cin >> n;
  int arr[n];
  for(int i = 0; i< n;i++){
    cin >> arr[i];
  }
  cout << "All possible subsequences are: " << endl;
  vector<int> ds;
  printSubsequences(0,ds,arr,n);
  
  return 0;
}


#include <iostream>
using namespace std;
void print(int i,int n){
  if(i < 1)
    return;
  cout << i << endl;
  print(i-1,n);

}
int main() {
  int n;
  cin >> n;
  print(n,n);

  return 0;
}