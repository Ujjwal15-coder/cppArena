#include <iostream>
using namespace std;
void IntersectionArray(int arr1[],int n,int arr2[],int m){
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else{
            cout << arr1[i] << " ";
            i++,j++;
        }
    }
}
int main() {
    int arr1[]={2,4,5,6};
    int arr2[]={4,5,6,8};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);

    cout << "Intersection of an array: " << " ";
    IntersectionArray(arr1,n,arr2,m);

  return 0;
}