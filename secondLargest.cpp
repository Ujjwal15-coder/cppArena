#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter the size of an array" << endl;
  cin >> n;

  int arr[n];
  cout << "Enter the element in an array"<<endl;
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }

  int largest=arr[0];
  int secLargest = -1;
  for(int i = 1; i < n; i++){
    if(arr[i]>largest){
        secLargest = largest;
        largest = arr[i];
    }
    else if(arr[i]<largest && arr[i]>secLargest){
        secLargest = arr[i];

    }

  }
  cout << "Second Largest Element in an Array is " << secLargest << endl;
  return 0;
}