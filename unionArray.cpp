#include <iostream>
using namespace std;
// If the array is already Sorted
void unionArray(int arr1[],int n,int arr2[],int m){
    int i= 0,j=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            cout << arr1[i] << " ";
            i++;
        }
        else if(arr2[j]<arr1[i]){
            cout << arr2[j] << " ";
            j++;
        }
        else { // for equal elements print any one of them so we are printing arr1[i]
            cout << arr1[i] <<" "; 
            i++,j++;
        }
    }
    while(i<n) { // for remaining elements of arr1
        cout << arr1[i] <<" ";
         i++;
}
    while(j<m) { // for remaining elements of arr2
        cout << arr2[j] <<" ";
          j++;
}

}
int main() {
  int arr1[]={1,2,4,8,9};
  int arr2[]={3,5,7,8,10};

  int n = sizeof(arr1)/sizeof(arr1[0]);
  int m = sizeof(arr2)/sizeof(arr2[0]);

  cout << "Union of arrays ";
  unionArray(arr1,n,arr2,m);
  return 0;
}