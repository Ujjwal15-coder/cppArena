#include <iostream>
#include <vector>
using namespace std;
void printArray(int arr[],int n){
    for(int i = 0; i < n; i++)
    {
    cout << arr[i] << " "; 
    }
  cout << endl;
}
bool isSorted(int arr[],int n)
{
    for(int i = 1; i < n ; i++)
    {
    if(arr[i]<arr[i-1])
    {
         return false;
    }

    }
    return true;
  }
int main() {
  int arr[]={ 7, 6, 5, 8, 4, 3, 8};
  int n = sizeof(arr)/ sizeof(arr[0]);

  cout << "Print Array Elements" << endl;
  printArray(arr,n);

  if(isSorted(arr,n)){
    cout<<"Array is Sorted Already";
  }
  else{
    cout<<"Array is not sorted";
  }
  return 0;
}