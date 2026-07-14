#include <iostream>
#include<climits>
using namespace std;
int main() {
  int n;
  cout << "Enter the array size" << endl;
  cin >> n;

  int arr[n];
  cout << "Enter the array element: " << endl;
  for(int i = 0;i < n; i++)
  {
    cin >> arr[i];
  }
  
  int first = INT_MIN,second = INT_MIN,third = INT_MIN;

  for(int i=0;i<n;i++){

    if(arr[i]>first){
      third = second;
      second = first;
      first = arr[i];
    }
    else if(arr[i]>second && arr[i]!=first){
      third = second;
      second = arr[i];
    }
    else if(arr[i]>third && arr[i]!=first && arr[i]!=second){
      third=arr[i];
    }
  }

    if(third == INT_MIN){
      cout << "There is no third distinct element" << endl;
    }
    else {
      cout << "The third largest element in an array is:" << third << endl;
    }

    return 0;
  }
