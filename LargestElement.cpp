#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter the size of an array" << endl;;
  cin >> n;

  int arr[n];
  cout<<"Enter the Elements "<<endl;
  for(int i = 0;i < n;i++){
    cin>>arr[i];
  }
  int largest = arr[0];
  for(int i =0;i < n;i++){
    if(arr[i] >largest)
    {
    largest = arr[i];
  }
}
  cout << "Largest Element in an array is " << largest << endl;
  return 0; 
}