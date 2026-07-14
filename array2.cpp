#include <iostream>
using namespace std;
int main() {
    int arr[10]={1}; //1 is printed after that 0mis printed till the loctaion 10
    cout<<"Printing the array"<< endl;
    int n=10;
    for(int i=0;i<n;i++){
      cout << arr[i] << " ";
    }
  
    return 0;
  }