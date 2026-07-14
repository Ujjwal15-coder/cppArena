#include <iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
        cout << endl;
}
void moveZeroes(int arr[], int n){
    int j=0;
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
int main() {
  int arr[]={0,2,3,4,0,7,0,3,0,0};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout << "Print Array Elements" << endl;
  printArray(arr,n);

  moveZeroes(arr,n);

  cout << "Move zeroes to the end of an Array" << endl;
  printArray(arr,n);

  return 0;
}